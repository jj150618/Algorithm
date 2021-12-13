#include <stdio.h>
#include <stdlib.h>

int compare(const void *x, const void *y)
{
    return ((*(int *)x > *(int *)y) - (*(int *)x < *(int *)y));
}

int main(void)
{
    int *array;
    int i, j;
    int check;

    scanf("%d %d", &i, &check);
    if (!(array = (int *)malloc(sizeof(int) * i)))
        return (0);
    j = -1;
    while (++j < i)
        scanf("%d", &array[j]);
    qsort(array, i, sizeof(int), compare);
    printf("%d\n", array[check - 1]);
}