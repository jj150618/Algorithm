#include <stdio.h>

int main(void)
{
    int i;
    int j;

    j = 1;
    scanf("%d", &i);
    while (j <= i)
        printf("%d\n", j++);

    return (0);
}