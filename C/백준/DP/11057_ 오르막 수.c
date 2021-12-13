#include <stdio.h>

int dp(int a)
{
    int array[10001][10] = {0};
    int i;
    int j;
    int k;
    int sum;

    sum = 0;
    i = -1;
    while (++i <= 9)
        array[1][i] = 1;
    i = 1;
    while (++i <= a)
    {
        j = -1;
        while (++j <= 9)
        {
            k = -1;
            while (++k <= j)
                array[i][j] = (array[i][j] + array[i - 1][k]) % 10007;
        }
    }
    
    i = -1;
    while (++i <= 9)
        sum = (sum + array[a][i]) % 10007;
    return (sum);
}

int main(void)
{
    int a;

    scanf("%d", &a);

    printf("%d", dp(a) % 10007);
}