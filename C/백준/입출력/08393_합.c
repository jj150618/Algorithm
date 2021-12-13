#include <stdio.h>

int main(void)
{
    int i;
    int sum;

    sum = 0;
    scanf("%d", &i);
    while (0 < i)
        sum += i--;
    printf("%d", sum);

    return (0);
}