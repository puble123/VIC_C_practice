#include <stdio.h>
// �ּ�(��������), �̸�(���ں�����)�� �Է¹ޱ�
int main(void){
    // char* name; �Է¹��� ���ڿ��� ����� ������ Ȯ������ ����
    char name[128];
    char address[512];
    printf("�ּ� >>");
    // scanf("%s", address, sizeof(address));
    // gets(address); // �� ���������� ���۸� ���� �ʿ� ����
    gets(address);
    printf("�̸� >>");
    scanf("%s", name, sizeof(name));
    
    printf("�Է��� �̸� : %s\n", name);
    printf("�Է��� �ּ� : %s\n", address);
}