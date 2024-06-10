#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b)
{

    long long answer = 0;
    int max_x = (a>b) ? a:b;
    int min_x = (a<b) ? a:b;

    for(int i=min_x; i<=max_x; i++)
    {
        answer += i;
    }

    return answer;

}

void main(void)
{
    
}