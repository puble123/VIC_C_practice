#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �� �ݾ��� ����ϰ� �߰��� �ʿ��� �ݾ��� ��ȯ�ϴ� �Լ�
long long solution(int price, int money, int count) {
    // ���������� ��: count * (count + 1) / 2
    long long totalCost = (long long)price * count * (count + 1) / 2;
    // �߰��� �ʿ��� �ݾ� ���
    long long requiredMoney = totalCost - money;
    // ��� ��ȯ, ������ �ݾ��� 0���� ������ 0�� ��ȯ
    return (requiredMoney < 0) ? 0 : requiredMoney;
}

void main(void)
{
    if(solution(3,20,4) == 10)
    {printf("�����Դϴ�.\n");}
    else
    {printf("�����Դϴ�.\n");}

}