#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<sched.h>

int32_t main()
{
    //RUN in sudo mode
    int pid=22109;//Run infiniteLoops.c and get pid
    chdir("/");

    struct sched_param sp={.sched_priority=90};
    printf("Scheduled Priority = %d\n",sched_getscheduler(pid));
    int ret=sched_setscheduler(pid,SCHED_RR,&sp);
    printf("The changed scheduler priority is %d\n",sched_getscheduler(pid));
    return 0;
}