#include <stdio.h>

int main(void)
{
    int i, j, k;
    int cnt;
    char str[51];

    scanf("%d", &i);
    j = -1;
    while (++j < i)
    {
        scanf("%s", str);
        k = -1;
        cnt = 0;
        while (str[++k])
        {
            if (str[k] == '(')
                cnt++;
            else if (str[k] == ')')
                cnt--;
            if (cnt < 0)
            {
                printf("NO\n");
                break;
            }
        }
        if (cnt == 0)
            printf("YES\n");
        else if (cnt > 0)
            printf("NO\n");
    }
}