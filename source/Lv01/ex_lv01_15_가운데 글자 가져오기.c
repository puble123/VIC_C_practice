#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* s) 
{

    int length = strlen(s);
    bool tf    = length%2==0; // ¦��?
    
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
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