#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
    long long int n1 = *(long long int *)a;
    long long int n2 = *(long long int *)b;

    if (n1 < n2)
        return (-1);
    else if (n1 > n2)
        return (1);
    else
        return (0);
}

int main(void)
{
    long long int array[100001];
    int i, j;
    long long int many;
    int many_cnt, cnt;

    scanf("%d", &i);

    j = -1;
    while (++j < i)
        scanf("%lld", &array[j]);
    j = -1;
    qsort(array, i, sizeof(long long int), comp);
    while (++j < i)
        printf("%lld\n", array[j]);
    
    many = array[0];
    many_cnt = 1;
    j = 0;
    while (++j < i)
    {
        cnt = 1;
        while (array[j - 1] == array[j])
        {
            j++;
            cnt++;
        }
        if (cnt > many_cnt)
        {
            many_cnt = cnt;
            many = array[j - 1];
        }
    }
    printf("%lld\n", many);
}

/*
// 
// 이 부분은 이중반복문 때문에 시간초과;;
// 구조체에 각 부분 넣어서 풀려고 시도하였으나 
//
#include <stdio.h>

typedef struct card
{
    long long int num;
    int cnt;
}ca;

int main(void)
{
    int i, j, k;
    long long int a;
    long long int max;
    int max_cnt;
    int check;
    ca  no[100001];

    scanf("%d", &i);
    scanf("%lld", &a);
    no[0].num = a;
    no[0].cnt++;
    j = 0;
    while (++j < i)
    {
        scanf("%lld", &a);
        check = 0;
        k = -1;
        while (++k < j && !check)
        {
            if (a == no[k].num)
            {
                no[k].cnt++;
                check = 1;
            }
            if (no[k].cnt > max_cnt)
            {
                max_cnt = no[k].cnt;
                max = no[k].num;
            }
        }
        if (check = 0)
        {
            no[j].num = a;
            no[j].cnt++;
        }
    }
    printf("%d\n", max);
}
*/