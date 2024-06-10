#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* phone_number) 
{
    int length = strlen(phone_number);

    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer = (char*)malloc((length+1)*sizeof(char));

    for(int i = 0; i < length; i++)
    {
        answer[i] = (length-i < 5) ? phone_number[i] : '*';
    }
    
    answer[length] = '\0';

    return answer;
}
void main(void){}