#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include<time.h>
#include<sys/resource.h>
int main()
{
    int pid;
    pid = getpid();
    int pty = getpriority(PRIO_PROCESS,pid);
    printf("Priority :- %d\n",pty);
    int ret;
    ret= nice(10);
    pty = getpriority(PRIO_PROCESS,pid);
    printf("Priority after modifying :- %d\n",pty);
}