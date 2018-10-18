#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("Dual BSD/GPL");

static int hello_3_init(void)
{
    printk(KERN_ALERT "Hello World 3.\n");
    return 0;
}

static void hello_3_exit(void)
{
    printk(KERN_ALERT "Bye World 3.\n");
}

module_init(hello_3_init);
module_exit(hello_3_exit);


// /var/log/syslog to view messages
// insmod & rmmod to insert & remove kernel module
