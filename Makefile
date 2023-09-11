
obj-m = basic_kernel_module.o

KDIR = /lib/modules/6.4.11/build

all:
	make -C $(KDIR) M=$(PWD) modules
clean:
	make -C $(KDIR) M=$(PWD) clean
