#include <stdio.h>

int max(int a, int b, int c)
{
    int max;

    max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    return (max);
}

int main(void)
{
    int array[2][10001];
    int i, j;

    scanf("%d", &i);
    j = 0;
    while (++j <= i)
        scanf("%d", &array[0][j]);
    array[1][1] = array[0][1];
    array[1][2] = array[0][1] + array[0][2];
    j = 2;
    while (++j <= i)
        array[1][j] = max(array[1][j - 2] + array[0][j], array[1][j - 3] + array[0][j - 1] + array[0][j], array[1][j - 1]);
    printf("%d", array[1][i]);
}