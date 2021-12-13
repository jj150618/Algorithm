#include <stdio.h>

void print_star(int num_star, int num_space)
{
    while (num_space--)
        printf(" ");
    while (num_star--)
        printf("*");
    printf("\n");
}

int main(void)
{
    int i;
    int j;

    scanf("%d", &i);
    j = 0;
    while (++j <= i)
        print_star(j, i -j);
    j -= 1;
    while (0 < --j)
        print_star(j, i - j);

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
        k = i - j;
        while (0 < k--)
            printf(" ");
        k = j;
        while (0 < k--)
            printf("*");
        printf("\n");
        j++;
    }
    while (1 < --j)
    {
        k = i - j + 1;
        while (0 < k--)
            printf(" ");
        k = j - 1;
        while (0 < k--)
            printf("*");
        printf("\n");
    }
    
    return (0);
}
*/