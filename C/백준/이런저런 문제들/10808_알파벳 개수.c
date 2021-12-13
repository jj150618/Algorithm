#include <stdio.h>

int main(void)
{
    int alp[26] = {0, };
    char str[101];
    int j;

    scanf("%s", str);
    j = -1;
    while (str[++j])
        alp[str[j] - 97]++;
    j = -1;
    while (++j < 25)
        printf("%d ", alp[j]);
    printf("%d", alp[j]);
}