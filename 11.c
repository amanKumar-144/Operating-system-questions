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
    char buff1[30]="Hello World I am Aman1";
    char buff2[30]="Hello World I am Aman2";
    char buff3[30]="Hello World I am Aman3";

    const char *file="check.txt";

    int first_fd=open(file,O_RDWR);
    int second_fd=dup(first_fd);
    int third_fd=dup2(first_fd,10);

    write(first_fd,buff1,sizeof(buff1));
    write(second_fd,buff2,sizeof(buff2));
    write(third_fd,buff3,sizeof(buff3));
    return 0;
}