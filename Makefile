ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

######################################################################
# Set up variables

# If $VERILATOR_ROOT isn't in the environment, we assume it is part of a
# package install, and verilator is in your path. Otherwise find the
# binary relative to $VERILATOR_ROOT (such as when inside the git sources).
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

echo_sth:
	@echo $(CPPFLAGS)
	@echo $(LDFLAGS)


# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe
# Generate makefile dependencies (not shown as complicates the Makefile)
#VERILATOR_FLAGS += -MMD
# Optimize
VERILATOR_FLAGS += -Os -x-assign 0
# Warn abount lint issues; may not want this on less solid designs

#VERILATOR_FLAGS += -Wall
TOP = tb
VERILATOR_FLAGS += -Wno-Width 
VERILATOR_FLAGS += -top-module $(TOP)

#MAKEFILE_DIR = $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
IMG_ABS_DIR =  $(MAKEFILE_DIR)/img/$(IMG)-riscv64-nemu.bin
MAKEFILE_DIR = $(shell pwd)
IMGS = $(shell find $(MAKEFILE_DIR)/img -name "*.bin")
USR_CPPFLAGS = 
#USR_LDFLAGS = -lasan
VM_USER_CFLAGS =
USERFLAGS = VM_USER_LDLIBS=$(USR_LDFLAGS) VM_USER_CFLAGS=$(USR_CPPFLAGS)

# Make waveforms
VERILATOR_FLAGS += --trace
# Check SystemVerilog assertions
VERILATOR_FLAGS += --assert
# Generate coverage analysis
VERILATOR_FLAGS += --coverage
# Run Verilator in debug mode
#VERILATOR_FLAGS += --debug
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdbbt

# Input files for Verilator
VERILATOR_INPUT = -f flist.f

######################################################################
default: run

build_v:gen_flist
	@echo
	@echo "-- Verilator tracing example"

	@echo
	@echo "-- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)

build_c:
	@echo
	@echo "-- BUILD -------------------"
# To compile, we can either
# 1. Pass --build to Verilator by editing VERILATOR_FLAGS above.
# 2. Or, run the make rules Verilator does:
#	$(MAKE) -j -C obj_dir -f Vtop.mk
# 3. Or, call a submakefile where we can override the rules ourselves:
	$(MAKE) -j -C obj_dir -f V$(TOP).mk $(USERFLAGS)

run:
	@echo
	@echo "-- RUN ---------------------"
	@rm -rf logs
	@mkdir -p logs
	@obj_dir/V$(TOP) +trace $(IMG_ABS_DIR) \
	echo "run answer $$?"
	@echo
	@echo "-- COVERAGE ----------------"
	@rm -rf logs/annotated
	$(VERILATOR_COVERAGE) --annotate logs/annotated logs/coverage.dat

	@echo
	@echo "-- DONE --------------------"
	@echo "To see waveforms, open vlt_dump.vcd in a waveform viewer"
	@echo



gtk:
	gtkwave wave.vcd

gtkw:
	gtkwave wave.gtkw

all:
	$(MAKE) build_v
	$(MAKE) build_c
	$(MAKE) run


all_gtk:
	$(MAKE) build_v
	$(MAKE) build_c
	$(MAKE) run
	$(MAKE) gtkwave &

all_gtkw:
	$(MAKE) build_v
	$(MAKE) build_c
	$(MAKE) run
	$(MAKE) gtkwave_gtkw &
######################################################################
# Other targets

show-config:
	$(VERILATOR) -V

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir logs *.log *.dmp *.vpd coverage.dat core flist.f wave.vcd run.log \
	logss ;mkdir logss










sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

com:
	verilator --cc --exe --build -j 4 -Wall -f flist.f


gen_flist:
	@$(shell find ./csrc -name "*\.c" -or -name "*\.cc" -or -name "*\.cpp"> flist.f)
	@$(shell find ./vsrc -name "*\.v" -or -name "*\.sv">> flist.f)
	@echo $(IMG)



RESULT = .result
$(shell > $(RESULT))
COLOR_RED   = \033[1;31m
COLOR_GREEN = \033[1;32m
COLOR_NONE  = \033[0m
imgs:
	@echo $(IMGS)
all_: $(IMGS)
	@echo "all_"

#$(IMGS): %: %.temp
#	@echo $@
#	@if obj_dir/V$(TOP) +trace $@  ; then \
#		printf "[%14s] $(COLOR_GREEN)PASS!$(COLOR_NONE)\n" $* >> $(RESULT) ; \
#		echo "pass" ; \
#	else \
#		printf "[%14s] $(COLOR_RED)FAIL!$(COLOR_NONE)\n" $* >> $(RESULT) ; \
#		echo "fail" ; \
#	fi
NAME = abs.c
#delete variables prefix



#$(IMGS): %: %.temp
#	@echo $@
#	@obj_dir/V$(TOP) +trace $@ ; if [ $$? -eq 0 ] ; then \
#		printf "[%14s] $(COLOR_GREEN)PASS!$(COLOR_NONE)\n" $* >> $(RESULT) ; \
#		echo "pass" ; \
#	else \
#		printf "[%14s] $(COLOR_RED)FAIL!$(COLOR_NONE)\n" $* >> $(RESULT) ; \
#		echo "fail" ; \
#	fi
$(IMGS): %: %.temp
	@echo $@
	@if obj_dir/V$(TOP) +trace $@  tee > logss/$(notdir $@); then \
		printf "[%14s] $(COLOR_GREEN)PASS!$(COLOR_NONE)\n" $(notdir $@) >> $(RESULT) ; \
		echo "pass" ; \
	else \
		printf "[%14s] $(COLOR_RED)FAIL!$(COLOR_NONE)\n" $(notdir $@) >> $(RESULT) ; \
		echo "fail" ; \
	fi


%.temp:
	@echo "nothing"

run_all: all_
	cat $(RESULT)


