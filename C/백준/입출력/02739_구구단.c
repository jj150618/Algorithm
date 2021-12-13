#include <stdio.h>

int main(void)
{
    int i;
    int j;

    scanf("%d", &i);
    j = 1;
    while (j <= 9)
        printf("%d * %d = %d\n", i, j++, i * j);
    return (0);
}