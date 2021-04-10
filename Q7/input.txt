#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>

int main()
{
    char b;
    const char* input = "input.txt";
    const char* output = "output.txt";
    int fd_in = open(input, O_RDONLY);
    int fd_out = open(output, O_RDWR && O_EXCL);

    while(read(fd_in, &b, 1))
    {
        write(fd_out, &b, 1);
    }

    return 0;
}