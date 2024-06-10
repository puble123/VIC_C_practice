#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) 
{
    int answer = 0;
    long long numcopy = num;

    while(numcopy != 1)
    {
        answer ++;
        numcopy = (numcopy%2==0) ? numcopy/2 : 3*numcopy+1;
        if (answer>500)
        {return -1;}
    }

    return answer;
}

void main(void){}