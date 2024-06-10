#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void){
    srand((unsigned )time(NULL)); // ���� �ʱ�ȭ 
    int min = 1, max = 100;
    int answer; // �亯�� ���ڸ� ������ ����
    int change = 5; // �亯 ��ȸ�� 5������ ����. �亯�� ������ 1�� ����
    int computerNumber = rand() % max + 1; // 1~100������ ���� 
    printf("���� : %d\n", computerNumber); // �ǽ��̹Ƿ� ���� ���
    while(1){
        // �����Է¹ޱ�
        printf("%d���� %d ������ ���ڸ� ���� ������(���� ��ȸ : %d��)", min, max, change--);
        scanf("%d", &answer);
        // �Է��� ���ڿ� ���� �޼��� ���
        if(answer < min || answer > max){
            printf("���� ������ �� ���� ���ڸ� �Է��ϼ���\n\n");
        }else if(answer>computerNumber){
            // ���亸�� �Է��� ���ڰ� Ŭ �� : DOWN ��
            printf("DOWN ��\n\n");
            max = answer-1;
        }else if(answer<computerNumber){
            // ���亸�� �Է��� ���ڰ� ���� �� : UP ��
            printf("UP ��\n\n");
            min = answer+1;
        }else{
            printf("%d�� �����Դϴ�. �����մϴ�. %d������ ����\n\n", answer, 5-change);
            break;
        } // if - ������
        if(change==0){
            // ���� �ȳ����� : ��� ��ȸ�� ����߾��. �ƽ��Ե� �����߽��ϴ�.
            printf("5���� ��� ��ȸ�� ����߾��. �ƽ��Ե� �����߽��ϴ�\n\n");
            break;
        } // if - 5�� ��ȸ ����
    } // while
}//main