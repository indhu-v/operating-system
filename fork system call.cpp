#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
pid_t p;
printf("before fork\n");
if(p==0)
{
printf("I am child having id %d\n");
printf("My parent's id is %d\n");
}
else
{
printf("My child's id is %d\n",p);
printf("I am parent having id %d\n");
}
printf("Common\n");
}
