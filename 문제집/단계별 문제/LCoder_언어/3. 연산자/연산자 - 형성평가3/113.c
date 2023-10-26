#include <stdio.h>

int main(void)
{
    int width;
    int length;
    int area;

    scanf("%d %d\n", &width, &length);

    width = width + 5;
    length = length * 2;
    area = width * length;

    printf("width = %d\n", width);
    printf("length = %d\n", length);
    printf("area = %d\n", area);

    return 0;
}
