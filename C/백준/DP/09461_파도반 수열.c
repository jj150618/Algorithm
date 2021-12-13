#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int k;
    int l;
    long long DP[100] = {1, 1, 1};

    scanf("%d", &i);
    j = -1;
    while (++j < i)
    {
        scanf("%d", &k);
        l = 2;
        while (++l < k)
            DP[l] = DP[l - 2] + DP[l - 3];
        printf("%lld\n", DP[k - 1]);
    }
}