#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
bool solution(const char* s) 
{
    
    int res = 0;
    
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]=='(')
        {
            res ++;
        }
        else
        {
            res --;
        }
        if (res<0)
        {
            return false;
        }
    }
    return (res==0) ? true : false;
    
}