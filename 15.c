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
    extern char **environ;
    //for(int i=0;environ[i]!=NULL;i++)
    //{
    //    printf("%d %s\n",i,environ[i]);
    //}
    printf("%s\n",environ[12]);
    return 0;
}