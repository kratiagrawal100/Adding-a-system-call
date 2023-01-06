#include <linux/kernel.h>

asmlinkage long kratihello(void)
{
        printk("Hello krati\n");
        return 0;
}