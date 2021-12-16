from collections import deque

m, n = map(int,input().split())

box = []
for _ in range(n):
    box.append(list(map(int,input().split())))
    
dx = [1,-1,0,0]
dy = [0,0,1,-1]

a = deque()

for i in range(n):
    for j in range(m):
        if box[i][j] == 1:
            a.append([i,j])
            
while a:
    b = a.popleft()
    for i in range(4):
        y = dy[i] + b[0]
        x = dx[i] + b[1]
        if 0 <= x <m and 0<= y < n:
            if box[y][x] == -1:
                continue
            elif box[y][x] == 0:
                box[y][x] = box[b[0]][b[1]] + 1
                a.append([y,x])
                
check = 0
max_v = 0
for i in box:
    for j in i:
        if j > max_v:
            max_v = j
        if j == 0:
            check = 1
            break
            
if check == 1:
    print(-1)
else:
    print(max_v-1)