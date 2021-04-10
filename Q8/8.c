#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>

int main()
{
    char b;
    char enter;
    const char* file_in = "input.txt";
    int fd_in = open(file_in, O_RDONLY);
    

    while(read(fd_in, &b, 1))
    {
        if(b == '\n')
        {
            read(0, &enter, 1);
            if(enter != '\n')
            {
                printf("Press Enter\n");
            }
        }
        write(1, &b, 1);
    }
    close(fd_in);

    return 0;
}