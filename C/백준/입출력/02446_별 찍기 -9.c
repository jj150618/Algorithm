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
        print_star(2 * (i - j) + 1, j - 1);
    j -= 1;
    while (0 < --j)
        print_star(2 * (i - j) + 1, j - 1);

    return (0);
}

