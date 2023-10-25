#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int sum;
    int avg;

    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    avg = sum / 3;

    printf("sum : %d\n", sum);
    printf("avg : %d\n", avg);

    return 0;
}
