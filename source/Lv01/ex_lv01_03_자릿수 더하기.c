#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    while(n/10!=0)
    {
        answer += n%10;
        n /= 10;
    }
    return answer+n;
}

void main(void){}