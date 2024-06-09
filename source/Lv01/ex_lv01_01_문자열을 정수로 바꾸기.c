#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
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