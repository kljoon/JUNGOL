#include <stdio.h>

int main(void) {
    int minsu_mom, minsu_ke;
    int giyoung_mom, giyoung_ke;
    int re;

    scanf("%d %d", &minsu_mom, &minsu_ke);
    scanf("%d %d", &giyoung_mom, &giyoung_ke);

    re = (minsu_ke > giyoung_ke) && (minsu_mom > giyoung_mom);

    printf("%d\n", re);

    return 0;
}
