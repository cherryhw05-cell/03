#include <stdio.h>

int main(void)
{
    int a, b;
    float result;

    printf("분자를 입력하세요 : ");
    scanf("%d", &a);

    printf("분모를 입력하세요 : ");
    scanf("%d", &b);

    result = (float)a / b;   // 정수 → 실수 변환
    printf("나누기의 결과는 %f 입니다.\n", result);

    return 0;
}
