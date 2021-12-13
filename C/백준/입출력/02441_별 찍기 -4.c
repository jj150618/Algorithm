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
        k = j - 1;
        while (0 < k--)
            printf(" ");
        k = i - j + 1;
        while (0 < k--)
            printf("*");
        printf("\n");
        j++;
    }
    
    return (0);
}