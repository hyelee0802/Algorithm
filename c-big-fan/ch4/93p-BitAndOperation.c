#include <stdio.h>

int main(void)
{
    int num1 = 15; //  00000000 00000000 00000000 00001111
    int num2 = 20; //  00000000 00000000 00000000 00010100
    int num3 = num1 & num2; // num1과 num2의 비트단위 & 연산
    printf("0%o AND 0%o = 0%o \n", num1, num2, num3);
    return 0;

}