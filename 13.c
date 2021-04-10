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
    fd_set rfds;
    struct timeval tv;
    int ret;

    FD_ZERO(&rfds);
    FD_SET(0,&rfds);

    tv.tv_sec=10;
    tv.tv_usec=0;
    ret=select(1,&rfds,NULL,NULL,&tv);

    if(ret)
    {
        printf("Data is available in 10 seconds\n");
    }
    else
    {
        printf("Data is not available\n");
    }
    
    return 0;
}