#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int k;
    int max;
    int min;
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
        min = 0;
        k = -1;
        while (++k < j)
            if (array[k] < array[j])
                if (min < dp[k])
                    min = dp[k];
        dp[j] = min + 1;
        if (max < dp[j])
            max = dp[j];
    }
    printf("%d\n", max);
}