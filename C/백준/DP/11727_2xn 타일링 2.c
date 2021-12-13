#include <stdio.h>

int dp(int a)
{
    int array[1001];
    int i;

    i = 1;
    array[0] = 1;
    array[1] = 1;

    while (++i <= a)
        array[i] = (array[i - 1] + 2 * array[i - 2]) % 10007;

    return (array[a]);
}

int main(void)
{
    int a;

    scanf("%d", &a);

    printf("%d", dp(a));
}