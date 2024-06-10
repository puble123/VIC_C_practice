#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right);
int num_measure(int n);

void main(void)
{
    int answer = solution(13,17);
    printf("%d\n",answer);
}

int solution(int left, int right) 
{
    int answer = 0;
    for(int i=left; i<=right; i++){answer += (num_measure(i)%2==0) ? +i : -i;}
    return answer;
}

int num_measure(int n)
{
    int count = 0;
    for(int i = 1; i<=n; i++){if(n%i==0){count++;}}
    return count;
}