#include <stdio.h>
//����ü : ���� ������ �����͸� �ϳ��� ���� �ڷ������� 
struct student { // ����ü�� ����
    int num;      // �й�(student ����ü ���)
    double grade; // ����(student ����ü ���)
};
int main(void){
    int i =1 ;
    struct student s1 = {101, 4.43};
    printf("�й� = %d, ���� = %.2lf\n", s1.num, s1.grade);
}