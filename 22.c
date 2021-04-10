#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>


int32_t main()
{
    const char* file="check.txt";
    int fd=open(file,O_RDWR);

    if(!fork())
    {
        char sentence[5]="Hello";
        write(fd,sentence,sizeof(sentence));
        printf("Child process done\n");
    }
    else
    {
        char sentence[5]="World";
        write(fd,sentence,5);
        printf("Parent process\n");
    }
    wait(0);
    return 0;
}