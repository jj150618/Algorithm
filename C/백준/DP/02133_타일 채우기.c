#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int k;
    int DP[31] = {1, 0, 3};
    
    scanf("%d", &i);
    if (i % 2 == 0)
    {
        j = 4;
        while (j <= i)
        {
            DP[j] = DP[j - 2] * 3;

            k = 4;
            while (j >= k)
            {
                DP[j] += DP[j - k] * 2;
                k += 2;
            }
            j += 2;
        }
    }
    printf("%d", DP[i]);
}