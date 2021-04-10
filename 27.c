#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
    // execl
    // execl("/bin/ls","ls","-Rl",NULL);

    // execlp
    // execlp("/bin/ls","ls","-Rl",NULL);

    // execle
    // extern char **environ;
    // execle("/bin/ls","ls","-Rl",NULL,environ);

    // execv
    // char* s[]={"/bin/bash","-c","ls -Rl",NULL};
    // int flag=execv(s[0],s);

    // execvp
    char* s[]={"/bin/bash","-c","ls -Rl",NULL};
    int flag = execvp(s[0],s);
}