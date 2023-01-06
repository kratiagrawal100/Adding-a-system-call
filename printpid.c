#include <linux/syscalls.h>
#include <linux/kernel.h>
#include <linux/cred.h>
#include <linux/sched.h>

SYSCALL_DEFINE0(kratigetpid)
{
	printk("Get PID : %d \n", task_tgid_vnr(current));
        return 0;
}