#include <stdio.h>

int main(void)
{
    char c[101];
    int i;
    int result;

    result = 0;
    scanf("%d", &i);
    scanf("%s", c);
    while (0 < i)
    {
        result += c[i - 1] - '0';
        i--;
    }
    printf("%d", result);

    return (0);
}