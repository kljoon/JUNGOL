#include <stdio.h>

int main(void)
{
    double a;
    double b;

    a = 80.5;
    b = 22.34;

    printf("%10.2lf%10.2lf%10.2lf", a, b, a + b);

    return 0;
}
