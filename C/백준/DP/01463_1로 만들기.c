#include <stdio.h>
 
int find_min(int a,int b)
{
    return (a < b ? a : b);
}
 
int dp(int a)
{
    int array[1000001]={0};
    int i;
    
    i = 1;
    if(a == 1)
    {
        return array[0];
    }
    
    while (++i <= a)
    {
        array[i] = array[i - 1] + 1;
        if(i % 3 == 0)
            array[i] = find_min(array[i], array[i / 3] + 1);
        if(i % 2 == 0)
            array[i] = find_min(array[i], array[i / 2] + 1);
    }
    
    return array[a];
}
 
int main()
{
    int a;

    scanf("%d",&a);

    printf("%d",dp(a));
}

/*
#include <stdio.h>

int find_min(int a, int b)
{
    return (a < b ? a : b);
}

int recursive(int a)
{
    if (a == 1)
        return (0);
    if (a % 3 == 0)
        return (find_min(1 + recursive(a / 3), 1 + recursive(a - 1)));
    if (a % 2 == 0)
        return (find_min(1 + recursive(a / 2), 1 + recursive(a - 1)));
    return (1 + recursive(a - 1));
}

int main(void)
{
    int a;

    scanf("%d", &a);

    printf("%d", recursive(a));
}
*/