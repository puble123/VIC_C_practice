#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {

    int sum = 0;
    int y = x;

    while(y/10 != 0) //몫이 0이면 종료
    {
        sum += y%10;
        y /= 10;
    }

    return (x % (sum+y) == 0) ? true : false;
    
}

void main(void)
{
    
}