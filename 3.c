#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>

int main()
{
    const char* file = "output";
    int create = creat(file, 0666);
    int fd = open(file, O_RDONLY);

    printf("fd = %d\n", fd);

    return 0;
}