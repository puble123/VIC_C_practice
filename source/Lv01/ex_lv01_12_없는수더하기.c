#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len�� �迭 numbers�� �����Դϴ�.
int solution(int numbers[], size_t numbers_len) 
{
    //1���� 9������ ���� 45
    int answer = 45;
    for(int i=0; i<numbers_len; i++){answer -= numbers[i];}
    return answer;
}

void main(void){}