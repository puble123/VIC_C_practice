#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ǻ���ġ ������ ��ⷯ �������� ����ϴ� �Լ�
int fibonacci(int n) {
    // ù �� �Ǻ���ġ ��
    int n1 = 0;
    int n2 = 1;
    int temp;

    // ��ⷯ ��
    int MOD = 1234567;

    // �Ǻ���ġ ���� ���
    for (int i = 2; i <= n; i++) {
        temp = (n1 + n2) % MOD;  // ��ⷯ ������ ���� �߰� ���� �ʹ� Ŀ���� �ʰ� ��
        n1 = n2;
        n2 = temp;
    }

    return n2;
}

// �Ǻ���ġ ���� ����ϰ�, ����� 1234567�� ���� �������� ��ȯ�ϴ� �Լ�
int solution(int n) 
{
    return fibonacci(n);
}

void main(void)
{
    if(solution(3) == 2)
    {printf("�����Դϴ�.\n");}
    else
    {printf("�����Դϴ�.\n");}

    if(solution(5) == 5)
    {printf("�����Դϴ�.\n");}
    else
    {printf("�����Դϴ�.\n");}

}