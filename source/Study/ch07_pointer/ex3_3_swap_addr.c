#include <stdio.h>
void swap_addr(int* a, int* b); // �Լ�(call by reference) ����
int main(void){
    int a = 10, b=20;
    printf("swap_addr() ȣ�� �� a�ּ�=%p, a��=%d, b�ּ�=%p, b=%d\n", &a, a, &b, b);
    swap_addr(&a, &b); // �Լ�ȣ��
    printf("swap_addr() ȣ�� �� a�ּ�=%p, a��=%d, b�ּ�=%p, b=%d\n", &a, a, &b, b);
}
// �Լ� ����(=�Լ� ����)
void swap_addr(int* a, int* b){
    printf("�Լ��� a �ּ�=%p, ��=%d, b�ּ�=%p, ��=%d\n", a, *a, b, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("�Լ��� a �ּ�=%p, ��=%d, b�ּ�=%p, ��=%d\n", a, *a, b, *b);
}