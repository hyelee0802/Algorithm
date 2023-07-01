#include <stdio.h>

int main(void)
{
    double num1=245;
    int num2=3.1415; // 문제발생 --> 실수를 정수틀에 넣으려고 함
    int num3=129; 
    char ch=num3; // 문제발생 --> 정수를 char형에 넣으려고 함

    printf("정수 245를 실수로: %f \n", num1) ;
    printf("실수 3.1415를 정수로: %d \n", num2);
    printf("큰 정수 129를 작은 정수로: %d \n", ch);
    return 0;

}
