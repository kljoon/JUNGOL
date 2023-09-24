#include <stdio.h>

int main(void)
{
    int r = 5;
    double pi = 3.14;

    printf("원주 = %d * 2 * %f = %f\n", r, pi, r * 2 * pi);
    printf("넓이 = %d * %d * %f = %f\n", r, r, pi, r * r * pi);

    return 0;
}
