#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>

int main()
{
    const char* file = "input.txt";
    int fd = open(file, O_RDWR && O_EXCL);

    printf("fd = %d\n", fd);

    return 0;
}