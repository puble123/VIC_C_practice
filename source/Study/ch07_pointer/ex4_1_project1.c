#include <stdio.h>
// �迭���� ���� �������� �����ϴ� �Լ��� �����Ͻÿ�
void sort(int* arr, int cnt); // �Լ����� (cnt:�迭���� ����)
int main(void){
    int lotto[6] = {41, 1, 35, 20, 45, 10};
    printf("������ : ");
    for(int idx=0 ; idx<6 ; idx++){
        printf("%d\t", lotto[idx]);
    }
    sort(lotto, 6);
    printf("\n������ : ");
    for(int idx=0 ; idx<6 ; idx++){
        printf("%d\t", lotto[idx]);
    }
}
void sort(int* lotto, int cnt){
    for(int i=0 ; i<cnt-1 ; i++){
        for(int j=i+1 ; j<cnt ; j++){
            if(lotto[i] > lotto[j]){
                int temp = lotto[i];
                lotto[i] = lotto[j];
                lotto[j] = temp;
            }//if
        }//for - j
    }//for - i
} // sort