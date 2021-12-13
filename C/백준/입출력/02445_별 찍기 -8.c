#include <stdio.h>

void print_star(int num_star, int num_space)
{
    int temp;

    temp = num_star;
    while (num_star--)
        printf("*");
    while (num_space--)
        printf(" ");
    while (temp--)
        printf("*");
    printf("\n");
}

int main(void)
{
    int i;
    int j;

    j = 0;
    scanf("%d", &i);
    while (++j <= i)
        print_star(j, 2 * (i - j));
    while (1 < --j)
        print_star(j - 1, 2 * (i - (j - 1)));
    return (0);
}

/* 구버젼
int main(void)
{
    int i;
    int j;
    int k;

    j = 1;
    scanf("%d", &i);
    while (j <= i)
    {
        k = j;
        while (0 < k--)
            printf("*");
        k = i - j;
        while (0 < k-- + i - j)
            printf(" ");
        k = j;
        while (0 < k--)
            printf("*");
        printf("\n");
        j++;
    }
    while (1 < --j)
    {
        k = j - 1;
        while (0 < k--)
            printf("*");
        k = i - j + 1;
        while (0 < k-- + i - j + 1)
            printf(" ");
        k = j - 1;
        while (0 < k--)
            printf("*");
        printf("\n");
    }
    
    return (0);
}
*/