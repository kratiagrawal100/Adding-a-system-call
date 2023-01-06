#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
int main()
{
         printf("System call 1: %ld\n", syscall(548));
         printf("System call 2: %ld\n", syscall(549,"hello krati!"));
         printf("System call 3: %ld\n", syscall(550));
         printf("System call 4: %ld\n", syscall(551));
         return 0;
}