#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* s) 
{

    int length = strlen(s);
    bool tf    = length%2==0; // 짝수?
    
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * (tf ? 3:2));

    
    if(tf)
    {
        answer[0] = s[length/2-1];
        answer[1] = s[length/2];
        answer[2] = '\0';
    }
    else
    {
        answer[0] = s[length/2];
        answer[1] = '\0';
    }

    return answer;
}

void main(void){}