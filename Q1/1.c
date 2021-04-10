#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>


int main()
{
    int s_lnk = symlink("input.txt", "soft.txt");
    int h_lnk = link("input.txt", "hard.txt");
    int fifo = mknod("fifo", S_IFIFO, 0666);
    
    printf("soft_link = %d\n", s_lnk);
    printf("hard_link = %d\n", h_lnk);
    printf("fifo = %d\n", fifo);
    
    return 0;
}
