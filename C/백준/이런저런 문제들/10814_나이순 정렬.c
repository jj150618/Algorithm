#include <stdio.h>

typedef struct information
{
    int     age;
    char    name[101];
}inf;

inf array[100001];
inf temp[100001];

void swap(int a, int b)
{
    inf temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

void merge(int left, int mid, int right)
{
    int i, j, k, l;
    i = left;
    j = mid + 1;
    k = left;

    while (i <= mid && j <= right)
        if (array[i].age <= array[j].age)
            temp[k++] = array[i++];
        else
            temp[k++] = array[j++];
    if (i > mid)
        for (l = j; l <= right; l++)
            temp[k++] = array[l];
    else
        for (l = i; l <= mid; l++)
            temp[k++] = array[l];
    l = left - 1;
    while (++l <= right)
        array[l] = temp[l];
}

void merge_sort(int left, int right)
{
    int mid;

    if (left < right)
    {
        mid = (left + right) / 2;
        merge_sort(left, mid);
        merge_sort(mid + 1, right);
        merge(left, mid, right);
    }
}

int main(void)
{
    int i, j;
    
    scanf("%d", &i);
    j = -1;
    while (++j < i)
        scanf("%d %s", &array[j].age, &array[j].name);

    merge_sort(0, i - 1);

    j = -1;
    while (++j < i)
        printf("%d %s\n", array[j].age, array[j].name);
}