#include <stdio.h>
// �迭(array) : ���� �ڷ����� ����
int main(void){
    // �迭 ����� �ʱ�ȭ�� �ѹ�
    // �迭�� ũ�⸦ �������� ������ �� �� ������ŭ �޸� ����
    int subway[10] = {30,40,50}; // ������ �������� 0����
    for(int idx=0 ; idx<10 ; idx++){
        printf("subway[%d]=%d\n", idx, subway[idx]);
    }
}