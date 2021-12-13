#include <stdio.h>

int main(void)
{
    int i;
    int j;

    scanf("%d", &i);
    while (0 < i)
    {
        j = i;
        while (0 < j--)
            printf("*");
        printf("\n");
        i--;
    }

    return (0);
}