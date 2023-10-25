#include <stdio.h>

int main(void)
{
    double yard;

    printf("yard? ");
    scanf("%lf", &yard);

    printf("%.1lfyard = %.1lfcm\n", yard, yard * 91.44);

    return 0;
}
