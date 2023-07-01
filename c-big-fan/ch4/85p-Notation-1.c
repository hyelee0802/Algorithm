#include <stdio.h>

int main(void)
{
    int num1 = 0xA7, num2 = 0x43;
    int num3 = 032, num4 = 024;

    printf("0xA7의 16진수 정수값: %X\n", num1);
    printf("0x43의 16진수 정수값: %x\n", num2);
    printf(" 032의 8진수 정수값: %o\n", num3);
    printf(" 024의 8진수 정수값: %o\n", num4);

    printf("%d-%d=%d \n", num1, num2, num1-num2);
    printf("%d+%d=%d \n", num3, num4, num3+num4);

    printf("%d\n", 0b11111111111111111111111111110000);
    return 0;
}