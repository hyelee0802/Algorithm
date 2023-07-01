#include <stdio.h>

int main(void)
{
    int num1 = 3; // 00000000 00000000 00000000 000000011
/*
    int result1 = num1<<3; // num1의 비트열을 왼쪽으로 3칸식 이동
*/
    printf("%d \n", (3 << 3) >> 2); // 비트연산 왼쪽으로 3칸씩 이동 그리고 비트연산 오른쪽으로2칸씩 이동 
    return 0;

}