#include <stdio.h>
struct GameInfo{
    char* name;
    int year;
    int price;
};
int main(void){
    struct GameInfo gameInfo1;
    gameInfo1.name = "���̹�C";
    gameInfo1.year = 2024;
    gameInfo1.price = 33000;
    struct GameInfo* gamePtr = &gameInfo1;
    printf("��������(gameInfo1) ���\n");
    printf("�����̸� : %s\n", gameInfo1.name);
    printf("��ÿ��� : %d\n", gameInfo1.year);
    printf("���Ӱ��� : %d\n", gameInfo1.price);

    printf("��������(gamePtr�����ͺ���) ���\n");
    printf("�����̸� : %s\n", (*gamePtr).name);
    printf("��ÿ��� : %d\n", (*gamePtr).year);
    printf("���Ӱ��� : %d\n", (*gamePtr).price);

    printf("��������(gamePtr�����ͺ���) ���\n");
    printf("�����̸� : %s\n", gamePtr->name);
    printf("��ÿ��� : %d\n", gamePtr->year);
    printf("���Ӱ��� : %d\n", gamePtr->price);
}