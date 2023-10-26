#include <stdio.h>

int main(void)
{
    int koaean;
    int english;
    int math;
    int computer;
    int sum;
    int avg;

    scanf("%d %d %d %d", &koaean, &english, &math, &computer);

    sum = koaean + english + math + computer;
    avg = sum / 4;

    printf("sum %d\n", sum);
    printf("avg %d\n", avg);

    return 0;
}
