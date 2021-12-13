#include <stdio.h>

int main(void)
{
    int a, b, i, j;

    j = 0;
    scanf("%d", &i);
    while (j++ < i)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", j, a, b, a + b);
    }

    return (0);
}