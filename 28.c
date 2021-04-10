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
    printf("The max real time priority is %d\n",sched_get_priority_max(SCHED_RR));
    printf("The min real time priority is %d\n",sched_get_priority_min(SCHED_RR));
    return 0;
}