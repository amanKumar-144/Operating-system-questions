#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>

struct train
{
    int trainNumber;
    int ticketCount;
};

int32_t main()
{
    int trainNo;
    const char *file="record1.txt";

    int fd=open(file,O_RDWR);
    struct train t1={1,0};
    struct train t2={2,0};
    struct train t3={3,0};

    write(fd,&t1,sizeof(struct train));
    write(fd,&t2,sizeof(struct train));
    write(fd,&t3,sizeof(struct train));

    while(1)
    {
        int s1=lseek(fd,0,SEEK_SET);

        printf("Select the train{1,2,3}\n");
        scanf("%d",&trainNo);


        if(fd==-1)
        {
            printf("Unable to open the file\n");
            return 0;
        }
        static struct flock lock;

        lock.l_type=F_WRLCK;
        lock.l_start=(trainNo-1)*sizeof(struct train);
        lock.l_whence=SEEK_SET;
        lock.l_len=sizeof(struct train);
        lock.l_pid=getpid();
       

        int ret=fcntl(fd,F_SETLKW,&lock);
        

        struct train ticket;
        
        int s=lseek(fd,(trainNo-1)*sizeof(struct train),SEEK_SET);
        int bytes=read(fd,&ticket,sizeof(struct train));
        ticket.ticketCount+=1;

        s1=lseek(fd,0,SEEK_SET);
        s1=lseek(fd,(trainNo-1)*sizeof(struct train),SEEK_SET);
        printf("here\n");
        write(fd,&ticket,bytes);

        printf("The train Number is %d\n",ticket.trainNumber);
        printf("The ticket Count is %d\n",ticket.ticketCount);
        lock.l_type=F_UNLCK;
        ret=fcntl(fd,F_SETLKW,&lock);
    }
    return 0;
}