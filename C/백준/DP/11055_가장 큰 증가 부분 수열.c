#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int k;
    int max;
    int array[1001];
    int dp[1001];
    
    scanf("%d", &i);
    j = -1;
    while (++j < i)
        scanf("%d", &array[j]);
    j = -1;
    max = 0;
    while (++j < i)
    {
        dp[j] = array[j];
        k = -1;
        while (++k < j)
            if (dp[k] + array[j] > dp[j] && array[k] < array[j])
                dp[j] = dp[k] + array[j];
        if (dp[j] > max)
            max = dp[j];
    }
    printf("%d\n", max);
}