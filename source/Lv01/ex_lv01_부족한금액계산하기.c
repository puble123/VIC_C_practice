#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 총 금액을 계산하고 추가로 필요한 금액을 반환하는 함수
long long solution(int price, int money, int count) {
    // 등차수열의 합: count * (count + 1) / 2
    long long totalCost = (long long)price * count * (count + 1) / 2;
    // 추가로 필요한 금액 계산
    long long requiredMoney = totalCost - money;
    // 결과 반환, 부족한 금액이 0보다 작으면 0을 반환
    return (requiredMoney < 0) ? 0 : requiredMoney;
}

void main(void)
{
    if(solution(3,20,4) == 10)
    {printf("정답입니다.\n");}
    else
    {printf("오답입니다.\n");}

}