# npc

## 1. 如何启动npc仿真

**使用*make run IMG=add*可以测试add指令集,使用*make run IMG=fcexu*可以启动fc模拟器,已经编译完成的bin文件在img文件夹内,可以根据xxx-riscv64-nemu确定IMG=xxx**  

## 2. 相关参数说明

1. 通过tb.sv开头的参数改变取指和load-store的访问延迟,如IFU_DELAY = 1, 代表取回指令需要一个时钟周期, 在运行fcexu的时候建议将此改为0, 否则仿真速度过慢

