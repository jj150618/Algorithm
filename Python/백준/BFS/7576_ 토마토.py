from collections import deque

m, n = map(int,input().split())

# 토마토들의 위치를 체크할 box 리스트 선언
box = []
for _ in range(n):
    box.append(list(map(int,input().split())))

# 상하좌우 이동을 위한 리스트 선언
dx = [1,-1,0,0]
dy = [0,0,1,-1]

a = deque()

# 맵에서 익은 토마토들을 먼저 큐 자료구조에 넣는다.
for i in range(n):
    for j in range(m):
        if box[i][j] == 1:
            a.append([i,j])

# 먼저 들어온 토마토들부터 처리하면서, 다 처리하면 종료되도록 설정
while a:
    b = a.popleft()
    # 상하좌우 위치로 이동
    for i in range(4):
        y = dy[i] + b[0]
        x = dx[i] + b[1]
        # 맵 범위를 벗어나지 않는다면, 조건문 실행
        if 0 <= x <m and 0<= y < n:
            # 길이 막히면 해당 위치 종료
            if box[y][x] == -1:
                continue
            # 길이 안막히고 해당 위치가 아직 방문하지 않은(안익은 토마토) 곳이라면,
            # 해당 위치에 익은 토마토 전단계의 일수를 더 하고
            # 큐 자료구조에 넣어서, 앞에 것들이 다 실행되면 실행되도록 한다
            elif box[y][x] == 0:
                box[y][x] = box[b[0]][b[1]] + 1
                a.append([y,x])
                
# BFS를 실행하고 box를 확인하면서,
# 토마토가 빈 곳(-1) 때문에 아직 방문되지 않은 곳이 있다면, -1을 출력
# 그렇지 않다면, 박스 내에서 가장 오래 걸린 일수를 찾는다.
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
    # 최종적으로 1부터 시작했으므로, 실제 날짜는 하루씩 빼줘야 한다.
    print(max_v-1)