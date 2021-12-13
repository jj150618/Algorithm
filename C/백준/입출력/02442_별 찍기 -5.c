#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int k;

    j = 1;
    scanf("%d", &i);
    while (j <= i)
    {
        k = i - j;
        while (0 < k--)
            printf(" ");
        k = j;
        while (0 < j + k-- - 1)
            printf("*");
        printf("\n");
        j++;
    }
    
    return (0);
}