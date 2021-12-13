#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int k;
    int max_as;
    int max_ds;
    int min_as;
    int min_ds;
    int max_total;
    int array[1001];
    int dp_as[1001];
    int dp_ds[1001];

    
    scanf("%d", &i);
    j = -1;
    while (++j < i)
        scanf("%d", &array[j]);
    j = -1;
    max_as = 0;
    max_ds = 0;
    max_total = 0;
    while (++j < i)
    {
        min_as = 0;
        k = -1;
        while (++k < j)
            if (array[k] < array[j])
                if (min_as < dp_as[k])
                    min_as = dp_as[k];
        dp_as[j] = min_as + 1;
        if (max_as < dp_as[j])
            max_as = dp_as[j];
    }
    j = i;
    while (j--)
    {
        min_ds = 0;
        k = i;
        while (j < --k)
            if (array[k] < array[j])
                if (min_ds < dp_ds[k])
                    min_ds = dp_ds[k];
        dp_ds[j] = min_ds + 1;
        if (max_ds < dp_ds[j])
            max_ds = dp_ds[j];
    }
    j = -1;
    while (++j< i)
        if (max_total < dp_as[j] + dp_ds[j] - 1)
            max_total = dp_as[j] + dp_ds[j] - 1;
    printf("%d\n", max_total);
}