#include <stdio.h>
struct student{
    int id;        // �й�
    char name[20]; // �̸� char* name;
    double grade;  // ����
};
void stPrint(struct student s); // �Լ�����
int main(void){
    // ����ü ���� ����� �ʱ�ȭ
    struct student sArr[3] = {  {101, "ȫ�浿", 4.43},
                                {102, "��浿", 3.43},
                                {103, "�ű浿", 4.01}};
    printf("�й�\t�̸�\t����\n");
    for(int idx = 0; idx<3 ; idx++){
        stPrint(sArr[idx]); // �Լ� ȣ��
    } // for
} // main
void stPrint(struct student s){
    printf("%d\t%s\t%.2lf\n", s.id, s.name, s.grade);
}