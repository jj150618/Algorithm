from collections import deque

a, b = map(int,input().split())
board = [0] * 101

ladder = []
for _ in range(a):
    ladder.append(list(map(int,input().split())))

snake = []
for _ in range(b):
    snake.append(list(map(int,input().split())))
    
dice = [1,2,3,4,5,6]

# 매번 뱀과 사다리를 반복문으로 확인하기 보다는
# 시작점을 따로 리스트로 만들어서 관리
snake_s = [i[0] for i in snake]
ladder_s = [i[0] for i in ladder]

def BFS(board, start):
    c = deque() # 큐로 자료구조로 사용
    c.append(start)
    while c:
        temp = c.popleft()
        # 반복문으로 각각 주사위의 경우에 대해서 큐에 삽입
        for i in dice:
            # 주사위에 따라 이동한 현재 위치를 기록
            now = temp + i
            # 이동한 현재 위치가 보드판에서 이미 도착하지 않은 경우 +
            # 보드 판의 범위가 넘어가지 않는 경우
            if now <= 100 and board[now] == 0:
                # 사다리와 뱀을 만날 경우, 현재 위치를 변경
                if now in ladder_s:
                    for j in ladder:
                        if j[0] == now:
                            now = j[1]
                elif now in snake_s:
                    for j in snake:
                        if j[0] == now:
                            now = j[1]
                # 최종적으로 현재 위치과 방문한 적이 없을 경우에 큐에 삽입
                if board[now] == 0:
                    c.append(now)
                    board[now] = board[temp] + 1
                
BFS(board,1)
print(board[100])