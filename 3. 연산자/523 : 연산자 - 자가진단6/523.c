#include <stdio.h>

int main(void) {
    int a, b;
    int re1, re2, re3, re4;

    scanf("%d %d", &a, &b);

    re1 = a > b;
    re2 = a < b;
    re3 = a >= b;
    re4 = a <= b;

    printf("%d > %d --- %d\n", a, b, re1);
    printf("%d < %d --- %d\n", a, b, re2);
    printf("%d >= %d --- %d\n", a, b, re3);
    printf("%d <= %d --- %d\n", a, b, re4);

    return 0;
}
