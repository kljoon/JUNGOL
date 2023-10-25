#include <stdio.h>

int main(void)
{
    int a = 50;
    double b = 100.12;

    printf("%.2lf * %d = %.lf\n", b, a, a * b);

    return 0;
}
