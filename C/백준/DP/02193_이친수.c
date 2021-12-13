#include <stdio.h>

long long dp(int a)
{
    long long array[91];
    int i;

    i = 1;
    array[0] = 1;
    array[1] = 1;

    while (++i <= a - 1)
        array[i] = array[i - 1] + array[i - 2];

    return (array[a - 1]);
}

int main(void)
{
    int a;

    scanf("%d", &a);

    printf("%lld", dp(a));
}