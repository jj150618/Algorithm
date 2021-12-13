#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int k;
    int l;
    int DP[201][201];

    scanf("%d", &i);
    scanf("%d", &j);
    l = 0;
    while (++l <= j)
        DP[0][l] = 1;
    k = 0;
    while (++k <= i)
    {
        l = 0;
        while (++l <= j)
            DP[k][l] = (DP[k - 1][l] + DP[k][l - 1]) % 1000000000;
    }
    printf("%d\n", DP[i][j]);
}