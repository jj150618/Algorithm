#include <stdio.h>

int main(void)
{
    char day[7][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int x, y;
    int nday;

    nday = 0;
    scanf("%d %d", &x, &y);
    while (0 < --x)
        nday += month[x - 1];
    nday += y;
    printf("%s", day[nday % 7]);
    return (0);
}