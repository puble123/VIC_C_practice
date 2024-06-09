#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    //n은 0이상 3000이하의 정수입니다.
    //절반만 알면 됨.
    
    int answer = 0;

    for(int i = 1; i<=n; i++)
    {
        if(n%i==0) //나머지가 없으면
        {
            answer += i;
        }//if
    }//for

    return answer;
}

int main(void){}