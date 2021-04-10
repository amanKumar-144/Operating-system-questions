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
    char *file=(char*)malloc(100*sizeof(char));
    scanf("%s",file);

    struct stat sfile;
    stat(file,&sfile);

    if(S_ISREG(sfile.st_mode))
    {
        printf("%s is a regular file\n",file);
    }
    if(S_ISDIR(sfile.st_mode))
    {
        printf("%s is a directory\n",file);
    }
    if(S_ISCHR(sfile.st_mode))
    {
        printf("%s is a character device\n",file);
    }
    if(S_ISBLK(sfile.st_mode))
    {
        printf("%s is a block device\n",file);
    }
    if(S_ISFIFO(sfile.st_mode))
    {
        printf("%s is a FIFO File\n",file);
    }
    if(S_ISLNK(sfile.st_mode))
    {
        printf("%s is a link file\n",file);
    }
    return 0;
}