#include <stdio.h>

int main(void)
{
    int age;

    printf("당신의 나이는 몇 살입니까? ");
    scanf("%d", &age);

    printf("당신의 나이는 %d살이군요.\n", age);

    return 0;
}
