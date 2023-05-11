#include <stdio.h>

int main(void) {
    int width, length, area;

    scanf("%d %d", &width, &length);

    width = width + 5;
    length = length * 2;

    area = width * length;

    printf("width = %d\n", width);
    printf("length = %d\n", length);
    printf("area = %d\n", area);

    return 0;
}
