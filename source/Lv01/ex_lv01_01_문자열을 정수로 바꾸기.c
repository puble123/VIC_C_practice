#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) 
{
    int sign = 1, index = 0, result = 0;

    if(s[index] == '+')
    {
        index++;
    }
    else if(s[index] == '-')
    {
        sign = -1;
        index++;
    }

    for(index; index < strlen(s); index++)
    {
        result = result * 10 + (s[index]-'0');
    }
    return sign * result;
}