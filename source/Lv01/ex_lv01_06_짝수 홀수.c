#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) 
{
    
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���
    char* answer = (char*)malloc(5); //even �Ǵ� odd

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

//���׿����ڸ� Ȱ���� Ǯ��
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