#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n)
{
    for(long long i = 1; i <= n; i++)
    {
        if(i*i==n)
        {
            return (i+1)*(i+1);
        }
    }
    return -1;
}

void main(void)
{
    printf("��������");
}