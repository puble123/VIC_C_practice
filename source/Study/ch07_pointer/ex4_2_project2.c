#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// �迭���� ���� �������� �����ϴ� �Լ��� �����Ͻÿ�
void sort(int* arr); // 6�� �� �迭�� ���� �������� ����
int* make_lotto(); // �ߺ����� ���� �ζ� ��ȣ 6�� �迭�� return
int main(void){
    int* lotto = make_lotto();
    sort(lotto);
    printf("������ �ζǹ�ȣ : ");
    for(int idx=0 ; idx<6 ; idx++){
        printf("%d\t", lotto[idx]);
    }
}
int* make_lotto(){
    static int lotto[6];
    srand((unsigned int) time(NULL)); // ���� �ʱ�ȭ 
    // for(int i=0 ; i<6 ; i++){
    //     lotto[i] = rand()%45 +1;
    // }
    int i = 0;
    while(i<6){
        int temp = rand()%45 + 1; // ���� ����
        int duplication_check = 1;
        for(int idx=0 ; idx<i ; idx++){ // ���� ������ �ߺ��� �� �ִ��� Ȯ��
            if(temp == lotto[idx]){
                printf("%d��°���� �ߺ��� ��(%d) �̾Ƽ� �ٽ� ����\n", idx, temp);
                duplication_check = 0;
                break;
            }
        }//for - �ߺ�Ȯ��
        if(duplication_check){
            lotto[i] = temp;
            i++;
        }//if
    }//while
    return lotto;
}
void sort(int* lotto){
    for(int i=0 ; i<5 ; i++){
        for(int j=i+1 ; j<6 ; j++){
            if(lotto[i] > lotto[j]){
                int temp = lotto[i];
                lotto[i] = lotto[j];
                lotto[j] = temp;
            }//if
        }//for - j
    }//for - i
} // sort