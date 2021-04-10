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
    const char *file="check.txt";
    int fd=open(file,O_RDONLY);
    int fd2=fcntl(fd,F_GETFL);
    printf("%d %d\n",fd,fd2);
    return 0;
}