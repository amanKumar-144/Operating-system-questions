#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<string.h>

int main()
{
    char arr[50];
    int inp = read(0, arr, sizeof(arr));
    write(1, arr, inp);
    return 0;
}