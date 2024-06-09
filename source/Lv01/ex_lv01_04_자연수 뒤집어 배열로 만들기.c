#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {

    int* answer = (int*)malloc(11*sizeof(n)); //long long¿¡ 11°³
    int index = 0;

    while(1)
    {
        answer[index] = n%10;
        n /= 10;
        
        if (n/10 == 0)
        {
            answer[index+1] = n;
            break;
        }//if
        
        index++;
        
    }//while
    
    return answer;
}

void main(void)
{

}