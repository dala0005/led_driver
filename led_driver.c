#include <linux/init.h>
#include <linux/module.h>

static int led_init(void) {
	printk("initialization led\n");
	return 0;
}

static void led_exit(void) {
	printk("exit led\n");
}

module_init(led_init);
module_exit(led_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Daniel Larsson");
MODULE_DESCRIPTION("Raspberry pi B+ led driver");
MODULE_VERSION("0.1");
