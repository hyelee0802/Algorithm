#include <stdio.h>

int main(void)
{
    printf("%-8s|%14s|%5s \n", "name", "major", "grade");
    printf("%-8s|%14s|%5d \n", "kim", "ee", 3);
    printf("%-8s|%14s|%5d \n", "lee", "cs", 3);
    printf("%-8s|%14s|%5d \n", "han", "art", 3);
    return 0;
}