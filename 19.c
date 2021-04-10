#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<sys/time.h>

unsigned long long rdtsc()
{
    unsigned long long dst;
    __asm__ __volatile__("rdtsc":"=A"(dst));
    return dst;
}

int32_t main()
{
    long long int start,end;
    start=rdtsc();
    getpid();
    end=rdtsc();
    printf("The getpid function took %lld seconds\n",end-start);
    return 0;
}