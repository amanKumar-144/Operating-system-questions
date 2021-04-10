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
    if(!fork())
    {
        setsid();//Setsession id for daemon process
        chdir("/");

        umask(0);//Set permission

        printf("Starting the process-------\n");
        sleep(10);
        printf("The child pid is %d\n",getpid());
        printf("Daemon process is running.....\n");

    }
    else
    {
        exit(0);
    }
    return 0;
}