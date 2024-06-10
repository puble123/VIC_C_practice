#include <stdio.h>

void main(void)
{
    //1.변수선언과 초기화를 한번에
    int num1 = 10; 
    
    //2.변수선언과 할당을 따로
    int num2;
    num2 = 30;
    printf("num1=%d\t num2=%d\n", num1, num2);

    //3.동일한 자료형 변수
    int num3 = 10, num4 = 30, num5 = 50;
    printf("num3=%d\tnum4=%d\tnum5=%d\n", num3, num4, num5);

    //4.자료형 변수명1, 변수명2, ...;
    int n1, n2, n3;
    n1 = 1, n2 =2, n3 = 3;
    printf("n1=%d, n2=%d, n3=%d\n", n1, n2, n3);
}   