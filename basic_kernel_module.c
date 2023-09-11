/*name: basic kernel module
 *description: a basic kernel module to understand working of kernel module
 *author:darsan k p
 */

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

static int __init init_function(void)
{
printk(KERN_INFO "module inserted..\n");
return 0;

}

static void __exit exit_function(void)
{
printk(KERN_INFO "module removed..\n");
}


module_init(init_function);
module_exit(exit_function);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("a basic kernel driver");
MODULE_AUTHOR("DARSAN darsankp97@gmail.com");
MODULE_VERSION("1:0.0");





