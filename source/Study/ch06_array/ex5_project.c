#include <stdio.h>
/*������, ������, ������, ���밥, �������� Ű�� �Է¹޾� 
    ��»��� : ��� : 170.50
              ���� : ������ 190
              �ִ� : ������ 120
*/
int main(){
    char* names[] = {"������","������","������","���밥","������"};
    int arrHeight[5];  // ģ���� Ű �Է� �迭
    int totHeight = 0; // Ű ��������
    int idxMin, minHeight=999; // �ִܽ��� ���ϱ� ���� ������(index, Ű��)
    int idxMax, maxHeight=-1; // ������� ���ϱ� ���� ������(index, Ű��)
    // Ű �Է¹޾� totHeight�� �����ϱ�
    for(int idx=0 ; idx<5 ; idx++){
        printf("%s�� Ű�� ? ", names[idx]);
        scanf("%d", &arrHeight[idx]);
        if(arrHeight[idx]<minHeight || arrHeight[idx]>maxHeight){
            printf("Ű�� �߸� �Է��Ͻ� �� �����ϴ�. �ٽ� �Է����ּ���.\n");
            idx--;
            continue;
        }
        totHeight += arrHeight[idx]; // ����
    }
    printf("\n- ���Ű : %.2lf\n", totHeight/5.0);
    for(int idx=0 ; idx<5 ; idx++){
        if(arrHeight[idx] > maxHeight){
            maxHeight = arrHeight[idx];
            idxMin = idx;
        }// if - �ִ밪
        if(arrHeight[idx] < minHeight){
            minHeight = arrHeight[idx];
            idxMax = idx;
        } // if - �ּҰ�
    } // for
    printf("- ����� : %s\t%d\n", names[idxMax], maxHeight);
    printf("- �ִܽ� :  %s\t%d\n\n", names[idxMin], minHeight);
}