#include <stdio.h>

int main(void)
{
    char str[101];

    while (scanf("%[^\n]\n", str) == 1)
        printf("%s\n", str);

    return (0);
}