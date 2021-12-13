#include <stdio.h>
#include <string.h>

int main(void)
{
    char array[5003];
    int DP[5002];
    int i;
    int j;
    int flag_0;
    int flag_26;

    scanf("%s", &array[2]);
    array[0] = '0';
    array[1] = '0';
    i = strlen(array);
    if ( i - 2 > 5000)
    {
        printf("0");
        return (0);
    }
    j = 1;
    DP[0] = 0;
    DP[1] = 1;
    while (++j < i)
    {
        if ((array[j] == '0' && array[j - 1] == '0') || (array[j] == '0' && array[j - 1] >= '3'))
        {
            printf("0");
            return (0);
        }
        if ((array[j - 1] >= '2' && array[j] >= '7') || array[j - 1] >= '3' || array[j - 1] == '0') 
            flag_26 = 0;
        else
            flag_26 = 1;
        if (array[j] == '0')
            flag_0 = 0;
        else
            flag_0 = 1;
        DP[j] = (DP[j - 1] * flag_0 + DP[j - 2] * flag_26) % 1000000; 
    }
    printf("%d", DP[i - 1] % 1000000);
}