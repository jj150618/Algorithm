#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int a, b, c, d;
    long long int ab, cd;
    char A[8], B[8], C[8], D[8];
    char AB[16], CD[16];

    scanf("%d %d %d %d", &a, &b, &c, &d);
    sprintf(A, "%d", a);
    sprintf(B, "%d", b);
    sprintf(C, "%d", c);
    sprintf(D, "%d", d);
    strcat(A, B);
    strcat(C, D);
    ab = atoll(A);
    cd = atoll(C);
    printf("%lld\n", ab + cd);
}