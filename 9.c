#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>

int main()
{
    char* file = (char *)malloc(100*sizeof(char));
    scanf("%s", file);
    struct stat infile;
    stat(file, &infile);
 
    printf("inode = %lo\n", infile.st_ino);
    printf("no.of hard links = %lo\n", infile.st_nlink);
    printf("uid = %o\n", infile.st_uid);
    printf("gid = %o\n", infile.st_gid);
    printf("size = %lo\n", infile.st_size);
    printf("block size = %lo\n", infile.st_blksize);
    printf("number of blocks = %lo\n", infile.st_blocks);
    printf("time of last access = %lo\n", infile.st_atime);
    printf("time of last modification = %lo\n", infile.st_mtime);
    printf("time of last charge = %lo\n", infile.st_ctime);
}
