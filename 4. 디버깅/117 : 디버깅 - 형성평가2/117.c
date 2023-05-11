#include <stdio.h>

int main() {
    double a, b, c, avg;
    int sum;

    scanf("%lf %lf %lf", &a, &b, &c);

    sum = (int) a + (int) b + (int) c;
    avg = (a + b + c) / 3;

    printf("sum %d\n", sum);
    printf("avg %d\n", (int) avg);

    return 0;
}
