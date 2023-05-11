#include <stdio.h>

int main() {
    int a, b, c;
    double avg;

    scanf("%d %d %d", &a, &b, &c);

    avg = (double) (a + b + c) / 3;

    printf("%.1f\n", avg);

    return 0;
}
