#include <linux/syscalls.h>
#include <linux/kernel.h>

SYSCALL_DEFINE1(kratiprint, char *, message)
{
  char input[256];
  long result = strncpy_from_user(input, message, sizeof(input));

  if (result < 0 || result == sizeof(input))
    return -EFAULT;
 
  printk(KERN_INFO "Some Message -\"%s\"\n", input);

  return 0;
}