#include "mem.h"
#include "cpu_defines.h"
#include "common.h"
//#include "/opt/synopsys/vcs/O-2018.09-SP2/linux64/lib/svdpi.h"
__uint8_t *paddr;
int pmem_init(){
    paddr = (__uint8_t *)malloc(128*1024*1024);
    //for (int i = 0; i < 10000; i++)
    //{
    //    *(paddr+4*i)=(uint8_t)i;
    //}
    
    if(paddr!=NULL){
        printf("malloc success\n");
        return 0;
    }else{
        return -1;
    }
}

__uint8_t *vaddr_to_padder(__uint8_t *vaddr){
    return vaddr - (__uint8_t *)0x0000000080000000 + paddr ;
}

//len = 1 , 2 , 4 ,8
__uint64_t read_mem_with_len(const __uint64_t vaddr,__uint64_t *value,const int len){
    __uint8_t *vaddr_ = (__uint8_t *)vaddr;
    __uint8_t *paddr_ = vaddr_to_padder(vaddr_);
    __uint64_t value_ ;
    //printf("read vaddr = %p paddr_ = %p   paddr = %p   len = %d\n",vaddr_,paddr_,paddr,len);
    switch (len)
    {
    case 1:{
        value_ = (*((__uint8_t *)paddr_));
        break;
    }
    case 2:{
        value_ = (*((__uint16_t *)paddr_));
        break;
    }
    case 4:{
        value_ = (*((__uint32_t *)paddr_));
        break;
    }
    case 8:{
        value_ = (*((__uint64_t *)paddr_));
        break;
    }
    default:
        ASSERT(0,"MEMORY READ FAULT\n");
    }
    *((__uint64_t *)value) = value_ ;
    //printf("value = %lx\n",value_);
    return value_;
}
__uint64_t write_mem_with_len(const __uint64_t vaddr,const __uint64_t value,const int len){
    __uint8_t *vaddr_ = (__uint8_t *)vaddr;
    __uint8_t *paddr_ = vaddr_to_padder(vaddr_);
    //uint64_t value_ ;
    //printf("write vaddr = %p paddr_ = %p   paddr = %p   \n len = %d   value = %lx\n",vaddr_,paddr_,paddr,len,value);
    switch (len)
    {
    case 1:{
        (*((__uint8_t *)paddr_)) = value ;
        break;
    }
    case 2:{
        (*((__uint16_t *)paddr_)) = value ;
        break;
    }
    case 4:{
        (*((__uint32_t *)paddr_)) = value;
        break;
    }
    case 8:{
        (*((__uint64_t *)paddr_)) = value;
        break;
    }
    default:
        ASSERT(0,"MEMORY WRITE FAULT\n");
    }
    return 0;
}
#include <sys/time.h> 
static u_int64_t sec       = 0;
static u_int64_t sec_start = 0;
extern "C" void dut_read_mem_with_len(const __uint64_t vaddr,__uint64_t *value,const int len){
    //
    //printf("read vaddr = %lx paddr_ = %d   paddr = %d   len = %d\n",vaddr,0,0,len);
    __uint8_t *vaddr_ = (u_int8_t *)vaddr;//(__uint8_t *)(*vaddr);
    __uint8_t *paddr_ = vaddr_to_padder(vaddr_);
    __uint64_t value_ ;

    //处理读取rtc
    if(vaddr == RTC_ADDR || vaddr == RTC_ADDR + 4){
        assert(len==4);
        struct timeval time_day;
        gettimeofday(&time_day,NULL);
        if(sec_start == 0){
            sec_start = time_day.tv_sec;
        }
        sec = time_day.tv_sec - sec_start ;
        //time_day.tv_sec
        unsigned long  rtc = time_day.tv_usec + 1000000 * sec;
        //printf("time_day.tv_sec = %ld\n",time_day.tv_sec);
        //printf("sec = %ld\n",sec);
        //printf("rtc = %ld\n",rtc);
        if(vaddr == RTC_ADDR){
            *((__uint64_t *)value) = (rtc & 0x0000000000000000ffffffffffffffffl);
        }
        else if(vaddr == RTC_ADDR + 4){
            *((__uint64_t *)value) = (rtc>>32);
        }
        

        return;
    }
    //vga
    if(vaddr == FB_ADDR){
        *((__uint64_t *)value) = 0 ;
        printf("读取地址 vaddr == %x\n",FB_ADDR);
        return;
    }
    if(vaddr == KBD_ADDR){
        *((__uint64_t *)value) = 0 ;
        return ;
    }

    switch (len)
    {
    case 1:{
        value_ = (*((__uint8_t *)paddr_));
        break;
    }
    case 2:{
        value_ = (*((__uint16_t *)paddr_));
        break;
    }
    case 4:{
        value_ = (*((__uint32_t *)paddr_));
        break;
    }
    case 8:{
        value_ = (*((__uint64_t *)paddr_));
        break;
    }
    default:
        ASSERT(0,"MEMORY READ FAULT\n");
        //return -1;
    }
    *((__uint64_t *)value) = value_ ;
    #ifdef DEBUG_INFO
    printf("read vaddr = %p  data=%lx  len = %d\n",(void *)vaddr,value_,len);
    #endif
    //printf("value = %lx\n",value_);
    //return 0;
}
extern "C" __uint64_t dut_write_mem_with_len(const __uint64_t vaddr,const __uint64_t value,const int len){
    __uint8_t *vaddr_ = (__uint8_t *)(vaddr);
    __uint8_t *paddr_ = vaddr_to_padder(vaddr_);
    //uint64_t value_ ;
    #ifdef DEBUG_INFO
    printf("write vaddr = %p  len = %d   value = %lx\n",(void *)vaddr_,len,value);
    #endif
    if(vaddr == SERIAL_PORT){
        assert(len == 1);
        //printf("putchar\n");
        putchar((char )value);
        return 0;
    }
    switch (len)
    {
    case 1:{
        (*((__uint8_t *)paddr_)) = value ;
        break;
    }
    case 2:{
        (*((__uint16_t *)paddr_)) = value ;
        break;
    }
    case 4:{
        (*((__uint32_t *)paddr_)) = value;
        break;
    }
    case 8:{
        (*((__uint64_t *)paddr_)) = value;
        break;
    }
    default:
        ASSERT(0,"MEMORY WRITE FAULT\n");
    }
    return 0;
}
//__uint64_t read_mem_byte(__uint8_t *vaddr){
//    return read_mem_with_len(vaddr,1);
//}
//__uint64_t read_mem_half_word(__uint8_t *vaddr){
//    return read_mem_with_len(vaddr,2);
//}
//__uint64_t read_mem_word(__uint8_t *vaddr){
//    return read_mem_with_len(vaddr,4);
//}
//__uint64_t read_mem_double_word(__uint8_t *vaddr){
//    return read_mem_with_len(vaddr,8);
//}

int init_img(char *file){
    printf("file ===== %s\n",file);
    FILE *fp = fopen(file,"rb");
    if(fp==NULL){
        printf("open file fail\n");
        return -1;
    }else{
        printf("open file sccess,name = %s\n",file);
    }
    fseek(fp,0,SEEK_END);
    __uint64_t size = ftell(fp);
    fseek(fp,0,SEEK_SET);
    if(fread(paddr,size,1,fp)!=0){
        return 0;
        printf("img write to memory success\n");
    }else{
        return -1;
    } 
}

int mem_init(char *file){
    pmem_init();
    return init_img(file);
}
