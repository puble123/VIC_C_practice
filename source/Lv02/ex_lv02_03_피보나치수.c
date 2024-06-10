#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 피보나치 수열을 모듈러 연산으로 계산하는 함수
int fibonacci(int n) {
    // 첫 두 피보나치 수
    int n1 = 0;
    int n2 = 1;
    int temp;

    // 모듈러 값
    int MOD = 1234567;

    // 피보나치 수열 계산
    for (int i = 2; i <= n; i++) {
        temp = (n1 + n2) % MOD;  // 모듈러 연산을 통해 중간 값이 너무 커지지 않게 함
        n1 = n2;
        n2 = temp;
    }

    return n2;
}

// 피보나치 수를 계산하고, 결과를 1234567로 나눈 나머지를 반환하는 함수
int solution(int n) 
{
    return fibonacci(n);
}

void main(void)
{
    if(solution(3) == 2)
    {printf("정답입니다.\n");}
    else
    {printf("오답입니다.\n");}

    if(solution(5) == 5)
    {printf("정답입니다.\n");}
    else
    {printf("오답입니다.\n");}

}