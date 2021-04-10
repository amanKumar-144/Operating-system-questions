#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>

int32_t main()
{
    int stat;
    int pid1,pid2,pid3;

    pid1=fork();
    if(pid1==0)
    {
        sleep(3);
        printf("For child1 pid = %d\n and ppid = %d\n",getpid(),getppid());

    }
    else
    {
        pid2=fork();
        if(pid2==0)
        {
            sleep(2);
            printf("For child2 pid = %d\n and ppid = %d\n",getpid(),getppid());
        }
        else
        {
            pid3=fork();
            if(pid3==0)
            {
                sleep(1);
                printf("For child3 pid = %d\n and ppid = %d\n",getpid(),getppid());   
            }
            else
            {        
                waitpid(pid1,&stat,0);
                printf("Parent id is %d\n",getpid());
            }
        }
    }
    
    return 0;
}