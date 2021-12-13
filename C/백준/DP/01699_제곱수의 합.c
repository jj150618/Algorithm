#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int k;
    int DP[100001];

    scanf("%d", &i);
    j = 0;
    while (++j <= i)
    {
        DP[j] = j;
        k = 1;
        while (k * k <= j)
        {
            DP[j] = DP[j] < DP[j - k * k] + 1 ? DP[j] : DP[j - k * k] + 1;
            k++;
        }
    }
    printf("%d\n", DP[i]);
}
