#include <stdio.h>
void swap(int a, int b); // �Լ�(call by value) ����
int main(void){
    int a = 10, b=20;
    printf("swap() ȣ�� �� a�ּ�=%p, a��=%d, b�ּ�=%p, b=%d\n", &a, a, &b, b);
    swap(a, b); // �Լ�ȣ��
    printf("swap() ȣ�� �� a�ּ�=%p, a��=%d, b�ּ�=%p, b=%d\n", &a, a, &b, b);
}
// �Լ� ����(=�Լ� ����)
void swap(int a, int b){
    printf("�Լ��� a�ּ�=%p, a��=%d, b�ּ�=%p, b=%d\n", &a, a, &b, b);
    int temp = a;
    a = b;
    b = temp;
    printf("�Լ��� a�ּ�=%p, a��=%d, b�ּ�=%p, b=%d\n", &a, a, &b, b);
}