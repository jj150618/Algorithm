#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, j;
    int alp, ALP, num, space;
    char str[102];

    while (fgets(str, sizeof(str), stdin)!= NULL)  // fgets 공부하자
    {
        j = strlen(str);
        str[j - 1] = '\0';
        alp = 0;
        ALP = 0;
        num = 0;
        space = 0;
        i = -1;
        while (str[++i] != '\0')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                alp++;
            else if (str[i] >= 'A' && str[i] <= 'Z')
                ALP++;
            else if (str[i] >= '0' && str[i] <= '9')
                num++;
            else
                space++;
        }
        printf("%d %d %d %d\n", alp, ALP, num, space);
    }
}