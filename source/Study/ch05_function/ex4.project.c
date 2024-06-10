#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2) ;
int main(void){
    srand((unsigned int) time(NULL)); // ���� �ʱ�ȭ 
    int answer;
    int level;
    for(level=1 ; level<=3 ; level++){
        int num1 = getRandomNumber(level);
        int num2 = getRandomNumber(level);
        showQuestion(level, num1, num2);
        scanf("%d", &answer); 
         if(answer == num1*num2){
            printf("%d�ܰ� �����Դϴ�\n", level);
        }else{
            printf("%d�ܰ� �����Դϴ�. ���� �����Դϴ�\n\n", level);
            break;
        } // if
    }// for
    if(level>3){
        printf("3�ܰ���� �� ���̽��ϴ�. �����Դϴ�\n\n");
    }
}
int getRandomNumber(int level){
    //1������ 1~4/2������ 5~8/3������ 9~12
    return (rand()% 4 +1) + (level-1)*4;
}
void showQuestion(int level, int num1, int num2){
    printf("\n%d���� �������� ����~\n", level);
    printf("��Ʈ : %d x %d >>  ", num1, num2);
}