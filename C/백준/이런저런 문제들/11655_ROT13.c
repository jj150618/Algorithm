#include <stdio.h>

int main(void)
{
    char str[101];
    int i;
    char c;

    scanf("%[^\n]", str);
    i = -1;
    while (str[++i])
    {
        c = str[i];
        if (c >= 'a' && c <= 'z')
            c = (c - 'a' + 13) % 26 + 'a';
        else if (c >= 'A' && c <= 'Z')
            c = (c - 'A' + 13) % 26 + 'A';
        printf("%c", c);
    }
}