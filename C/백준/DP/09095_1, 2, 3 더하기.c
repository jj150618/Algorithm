#include <stdio.h>

int dp(int a)
{
    int array[11];
    int i;

    i = 2;
    array[0] = 1;
    array[1] = 1;
    array[2] = 2;

    while (++i <= a)
        array[i] = array[i - 1] + array[i - 2] + array[i - 3];
    return (array[a]);
}

int main(void)
{
    int a;
    int b;

    scanf("%d", &a);
    while (a-- > 0)
    {
        scanf("%d", &b);
        printf("%d\n", dp(b));
    }
}