#include <stdio.h>

int main(void) {
    int a, b;
    int re1, re2;

    scanf("%d %d", &a, &b);

    re1 = (a && b);
    re2 = (a || b);

    printf("%d %d\n", re1, re2);
    
    return 0;
}
