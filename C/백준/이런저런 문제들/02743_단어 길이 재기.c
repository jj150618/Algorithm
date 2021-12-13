#include <stdio.h>

int main(void)
{
    int i;
    char str[101];

    i = 0;
    scanf("%s", str);
    while (str[i])
        i++;
    printf("%d\n", i);

}