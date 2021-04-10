#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int32_t main()
{
    char *file=(char*)malloc(20*sizeof(char*));

    scanf("%s",file);

    int fd=open(file,O_RDWR);
    if(fd==-1)
    {
        printf("Unable to open the file\n");
        return 0;
    }

    static struct flock lock;

    lock.l_type=F_RDLCK;
    lock.l_start=0;
    lock.l_whence=SEEK_SET;
    lock.l_len=0;
    lock.l_pid=getpid();

    int ret=fcntl(fd,F_SETLKW,&lock);
    printf("The return value is %d\n",ret);

    lock.l_type=F_UNLCK;
    ret=fcntl(fd,F_SETLKW,&lock);
    printf("The return value is %d\n",ret);

    lock.l_type=F_WRLCK;
    ret=fcntl(fd,F_SETLKW,&lock);
    printf("The return value is %d\n",ret);

    lock.l_type=F_UNLCK;
    ret=fcntl(fd,F_SETLKW,&lock);
    printf("The return value is %d\n",ret);

    return 0;
}