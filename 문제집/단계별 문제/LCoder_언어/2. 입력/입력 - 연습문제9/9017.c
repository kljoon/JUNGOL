#include <stdio.h>

int main(void)
{
    double x;
    double y;

    printf("두 개의 실수를 입력하시오.\n");
    scanf("%lf %lf", &x, &y);

    printf("x = %.2lf\n", x);
    printf("y = %.2lf\n", y);

    return 0;
}
