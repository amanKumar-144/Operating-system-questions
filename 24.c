#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>

int32_t main()
{
    if(!fork())
    {
        printf("Before orphan process\n");
        printf("Child process id = %d\n",getpid());
        printf("ppid = %d\n",getppid());

        sleep(5);
        printf("After Orphan process\n");
        printf("Child process id = %d\n",getpid());
        printf("ppid = %d\n",getppid());
    }
    else
    {
        printf("Parent Process id = %d\n",getpid());

    }
    return 0;    
}