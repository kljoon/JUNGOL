#include <stdio.h>

int main(void) {
    int a, b, c;
    int re1, re2;

    scanf("%d %d %d", &a, &b, &c);

    re1 = (a > b) && (a > c);
    re2 = (a == b) && (b == c);

    printf("%d %d\n", re1, re2);

    return 0;
}
