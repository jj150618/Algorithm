#include <stdio.h>

int main(void)
{
    int a, b, i;

    scanf("%d", &i);
    while (0 < i--)
    {
        scanf("%d,%d", &a, &b);
        printf("%d\n", a + b);
    }

    return (0);
}