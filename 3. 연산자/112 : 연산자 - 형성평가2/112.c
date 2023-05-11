#include <stdio.h>

int main(void) {
    int a, b;
    int c, d;

    scanf("%d %d", &a, &b);

    c = a / b;
    d = a % b;

    printf("%d / %d = %d...%d\n", a, b, c, d);
    
    return 0;
}
