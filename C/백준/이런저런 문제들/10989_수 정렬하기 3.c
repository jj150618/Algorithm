#include <stdio.h>

int main(void)
{
    short array[10001] = {0, };
    int i, j;
    int cnt;

    scanf("%d", &i);
    j = -1;
    while (++j < i)
    {
        scanf("%d", &cnt);
        array[cnt]++;
    }
    j = 0;
    while (++j <= 10000)
    {
        while (array[j])
        {
            printf("%d\n", j);
            array[j]--;
        }
    }
}