#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<string.h>

int main()
{
    char buff[50] = "I am Iron man";
    const char* file = "input.txt";
    int fd = open(file, O_RDWR);
    write(fd, buff, 10);
    int ret = lseek(fd, 10, SEEK_CUR);
    write(fd, buff, 10);

    printf("return value = %d\n", ret);

    return 0;
}
