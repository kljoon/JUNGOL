#include <stdio.h>

int main(void) {
    double a, b;
    char ch;

    scanf("%lf %lf %c", &a, &b, &ch);

    printf("%.2lf\n", a);
    printf("%.2lf\n", b);
    printf("%c\n", ch);

    return 0;
}
