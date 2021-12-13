#include <stdio.h>

int main(void)
{
    int min, max;
    int i , j;

    max = -1000000;
    min = 1000000;

    scanf("%d", &i);

    while (0 < i--)
    {
        scanf("%d", &j);
        if (j >= max)
            max = j;
        if (j <= min)
            min = j;
    }

    printf("%d %d", min, max);

    return (0);
}