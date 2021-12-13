#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int max;
    int array[100001];
    int DP[100001];

    scanf("%d", &i);
    j = -1;
    while (++j < i)
        scanf("%d", &array[j]);
    DP[0] = array[0];
    max = DP[0];
    j = 0;
    while (++j < i)
    {
        if (DP[j - 1] > 0)
            DP[j] = DP[j - 1] + array[j];
        else
            DP[j] = array[j];
        if (DP[j] > max)
            max = DP[j];
    }
    printf("%d\n", max);
}