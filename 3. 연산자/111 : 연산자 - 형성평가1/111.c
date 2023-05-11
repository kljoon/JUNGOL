#include <stdio.h>

int main(void) {
    int ko, en, ma, co;
    int sum;
    double avg;

    scanf("%d %d %d %d", &ko, &en, &ma, &co);

    sum = ko + en + ma + co;
    avg = sum / 4;

    printf("sum %d\n", sum);
    printf("avg %.f\n", avg);
    
    return 0;
}
