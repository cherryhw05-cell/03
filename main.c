#include <stdio.h>

int main(void)
{
    char c;
    int i;

    printf("input a number :");
    scanf("%c", &c);

    i = c - '0';   // 문자 -> 숫자 변환
    printf("The input number is %i\n", i);

    return 0;
}
