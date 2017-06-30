obj-m := led_driver.o

MDIR := /lib/modules/$(shell uname -r)/build

default:
	$(MDIR) -C $(MDIR) M=$(shell pwd) modules
