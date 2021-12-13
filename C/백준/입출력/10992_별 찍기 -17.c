#include <stdio.h>

void print_star(int num_star, int last_star, int front_space, int middle_space)
{
    while (front_space--)
        printf(" ");
    while (num_star--)
        printf("*");
    while (middle_space-- > 0)
        printf(" ");
    if (last_star > 0)
        printf("*");
    printf("\n");
}

int main(void)
{
    int i;
    int j;

    scanf("%d", &i);
    j = 0;
    while (++j <= i - 1)
        print_star(1, j - 1, i - j, 2 * (j - 1) - 1);
    j = 0;
    while (j++ < 2 * i - 1)
        printf("*");
    return (0);
}

