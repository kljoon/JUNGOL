#include <stdio.h>

int main(void)
{
    int minsu_height;
    int minsu_weight;
    int giyoung_height;
    int giyoung_weight;
    int result;

    scanf("%d %d", &minsu_height, &minsu_weight);
    scanf("%d %d", &giyoung_height, &giyoung_weight);

    result = (minsu_height > giyoung_height) && (minsu_weight > giyoung_weight);

    printf("%d\n", result);

    return 0;
}
