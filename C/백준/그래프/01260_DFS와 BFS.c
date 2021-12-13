#include <stdio.h>

int check_graph[1001][1001] = {0, };
int check_DFS[1001] = {0, };
int check_BFS[1001] = {0, };
int queue[1001];

void DFS(int start, int end)
{
    int i;

    check_DFS[start] = 1;
    printf("%d ", start);
    i = 0;
    while (++i <= end)
        if (check_graph[start][i] == 1 && check_DFS[i] == 0)
            DFS(i, end);
}

void BFS(int start, int end)
{
    int front, rear;
    int pop, i;

    front = 0;
    rear = 0;
    printf("%d ", start);
    queue[0] = start;
    check_BFS[start] = 1;
    rear++;
    while (front < rear)
    {
        pop = queue[front];
        front++;
        i = 0;
        while (++i <= end)
            if (check_graph[pop][i] == 1 && check_BFS[i] == 0)
            {
                printf("%d ", i);
                queue[rear] = i;
                rear++;
                check_BFS[i] = 1;
            }
    }
}

int main(void)
{
    int i, j, k, start;
    int x, y;

    scanf("%d %d %d", &i, &j, &start);
    k = -1;
    while (++k< j)
    {
        scanf("%d %d", &x, &y);
        check_graph[x][y] = 1;
        check_graph[y][x] = 1;
    }
    DFS(start, i);
    printf("\n");
    BFS(start, i);
}