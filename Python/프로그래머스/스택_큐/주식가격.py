# queue를 불러와서 사용해도 되지만, 범용성을 위해서 deque를 사용
# deque이지만 큐 자료구조로 사용
from collections import deque

def solution(prices):
    a = deque(prices) # 리스트를 큐에 삽입
    answer = []
    cnt = 0
    while a: # 큐가 빌 때까지 반복문 수행
        b = a.popleft() # 구간을 구할 값을 가져온다
        cnt = 0
        for i in a:
            cnt += 1
            if b > i: # 떨어지는 순간이 나오면 바로 반복문을 빠져나온다.
                break
        answer.append(cnt)
    return answer