#include <stdio.h>
#include <math.h>

int array[300000] = {0};

int next_num(int A, int P)
{
    int sum;

    sum = 0;
    while (A)
    {
        sum += (int)pow(A % 10, P);
        A /= 10;
    }
    return sum;
}

int main(void)
{
    int A, P;
    int cnt, next;

    scanf("%d %d", &A, &P);
    cnt = 1;
    array[A] = 1;
    next = next_num(A, P);
    while (array[next] == 0)
    {
        cnt++;
        array[next] = cnt;
        next = next_num(next, P);
    }
    printf("%d\n", array[next] - 1);
}
