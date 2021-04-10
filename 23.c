#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/wait.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>

int32_t main()
{
    if(!fork())
    {
        printf("Child Process\n");
    }
    else
    {
        sleep(5);
        printf("Parent Process\n");
    }
    wait(0);
    return 0;
}