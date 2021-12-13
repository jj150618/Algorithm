#include <stdio.h>

int check_graph[1001][1001] = {0, };
int check_DFS[1001] = {0, };

void DFS(int start, int end)
{
    int i;

    check_DFS[start] = 1;
    i = 0;
    while (++i <= end)
        if (check_graph[start][i] == 1 && check_DFS[i] == 0)
            DFS(i, end);
}

int main(void)
{
    int i, j, k;
    int x, y;
    int cnt = 0;

    scanf("%d %d", &i, &j);
    k = -1;
    while (++k< j)
    {
        scanf("%d %d", &x, &y);
        check_graph[x][y] = 1;
        check_graph[y][x] = 1;
    }
    k = 0;
    while (++k <= i)
        if (check_DFS[k] == 0)
        {
            cnt++;
            DFS(k, i);
        }
    printf("%d\n", cnt);
}