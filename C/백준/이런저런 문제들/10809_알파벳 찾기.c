#include <stdio.h>

int main(void)
{
    int alp[26];
    char str[101];
    int j;

    scanf("%s", str);
    j = -1;
    while (++j < 26)
        alp[j] = -1;
    j = -1;
    while (str[++j])
        if (alp[str[j] - 97] == -1)
            alp[str[j] - 97] = j;
    j = -1;
    while (++j < 26)
        printf("%d ", alp[j]);
}