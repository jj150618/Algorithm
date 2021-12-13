#include <stdio.h>

int main(void)
{
    char str[101];

    while (gets(str) != NULL)
        puts(str);
        
    return (0);
}