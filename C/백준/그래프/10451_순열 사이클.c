#include <stdio.h>
#include <string.h>

int check_graph[1001][1001] = {0, };
int check_DFS[1001] = {0, };

void DFS(int start, int end)
{
    int i;

    i = 0;
    check_DFS[start] = 1;
    while (++i <= end)
        if (check_graph[start][i] == 1 && check_DFS[i] == 0)
            DFS(i, end);
}

int main(void)
{
    int i, j, k, l;
    int cnt;

    scanf("%d", &i);
    while (0 < i--)
    {
        scanf("%d", &j);
        k = 0;
        while (++k <= j)
        {
            scanf("%d", &l);
            check_graph[k][l] = 1;
            check_graph[l][k] = 1;
        }
        k = 0;
        cnt = 0;
        while (++k <= j)
            if (check_DFS[k] == 0)
            {
                cnt++;
                DFS(k, j);
            }
        printf("%d\n", cnt);
        memset(check_graph, 0 , sizeof(check_graph));
        memset(check_DFS, 0, sizeof(check_DFS));
    }
}