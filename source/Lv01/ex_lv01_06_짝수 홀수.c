#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) 
{
    
    // 리턴할 값은 메모리를 동적 할당해주세요
    char* answer = (char*)malloc(5); //even 또는 odd

    if(num%2==0)
    {
        answer = "Even";
    }
    else
    {
        answer = "Odd";
    }


    return answer;
}

//삼항연산자를 활용한 풀이
/*
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) 
{
    return (num%2==0) ? "Even" : "Odd";
}
*/

void main(void)
{
    
}