#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) 
{
    for(int i=2; i<=n-1; i++)
    {
        if(n%i==1)
        {
            return i;
        }
    }
}