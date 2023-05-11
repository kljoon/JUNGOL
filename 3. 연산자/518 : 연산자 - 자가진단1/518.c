#include <stdio.h>

int main(void) {
    int a, b, c, sum;
    double avg;

    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    avg = sum / 3;

    printf("sum : %d\n", sum);
    printf("avg : %.f\n", avg);
    
    return 0;
}
