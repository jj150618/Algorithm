#include <stdio.h>

int dp(int a)
{
    int array[101][10] = {};
    int i;
    int j;
    int sum;

    sum = 0;
    i = 0;
    while (++i <= 9)
        array[1][i] = 1;
    i = 1;
    while (++i <= a)
    {
        j = -1;
        while (++j <= 9)
        {
            if (j == 0)
                array[i][j] = array[i - 1][1] % 1000000000;
            else if (j == 9)
                array[i][j] = array[i - 1][8] % 1000000000;
            else
                array[i][j] = (array[i - 1][j - 1] + array[i - 1][j + 1]) % 1000000000;
        }
    }
    
    i = -1;
    while (++i <= 9)
        sum = (sum + array[a][i]) % 1000000000;
    return (sum);
}

int main(void)
{
    int a;

    scanf("%d", &a);

    printf("%d", dp(a) % 1000000000);
}