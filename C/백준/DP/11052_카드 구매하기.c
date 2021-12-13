#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int k;
    int array[100001];
    int DP[100001] = {0};
    int max;

    scanf("%d", &i);
    j = 0;
    max = 0;
    while (++j <= i)
    {
        scanf("%d", &array[j]);
        k = 0;
        while (k++ <= j)
            if (max < array[k] + DP[j - k])
                max = array[k] + DP[j - k];
        DP[j] = max;
    }
    printf("%d\n", DP[i]);
}