#include <stdio.h>

int main(void)
{
    int a, b;
    int result1, result2;

    scanf("%d %d", &a, &b);

    result1 = (a && b);
    result2 = (a || b);

    printf("%d %d\n", result1, result2);

    return 0;
}
