#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2)
        return (-1);
    if (num1 > num2)
        return (1);
    return (0);
}

int main(void)
{
    int i;
    int j;
    int array[1000000];

    scanf("%d", &i);
    j = -1;
    while (++j < i)
        scanf("%d", &array[j]);
    
    qsort(array, i, sizeof(int), compare);

    j = -1;
    while (++j < i)
        printf("%d\n", array[j]);
}