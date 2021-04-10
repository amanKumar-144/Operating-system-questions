#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int32_t main()
{
    if(!fork())
    {
        printf("The child process id is %d\n",getpid());
    }
    else
    {   
        printf("The parent process id is %d\n",getpid());
    }
    return 0;
}