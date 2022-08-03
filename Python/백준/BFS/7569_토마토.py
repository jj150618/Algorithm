from collections import deque
import sys

m, n, h = map(int, sys.stdin.readline().split())

graph = []
queue = deque([])

for i in range(h):
    temp = []
    for j in range(n):
        temp.append(list(map(int, sys.stdin.readline().split())))
        for k in range(m):
            if temp[j][k] == 1:
                queue.append([i, j, k])
    graph.append(temp)

dx = [1, -1, 0, 0, 0, 0]
dy = [0, 0, 1, -1, 0, 0]
dz = [0, 0, 0, 0, 1, -1]

while queue:
    z, x, y = queue.popleft()

    for i in range(6):
        new_z = z + dz[i]
        new_x = x + dx[i]
        new_y = y + dy[i]

        if (0 <= new_z < h) and (0 <= new_x < n) and (0 <= new_y < m):
            if graph[new_z][new_x][new_y] == 0:
                graph[new_z][new_x][new_y] = graph[z][x][y] + 1
                queue.append([new_z, new_x, new_y])

answer = -1
check = 1

for i in graph:
    for j in i:
        for k in j:
            if k == 0:
                check = 0
            answer = max(answer, k)

if check == 0:
    print(-1)
elif answer == 1:
    print(0)
else:
    print(answer - 1)