from collections import deque

def solution(prices):
    a = deque(prices)
    answer = []
    cnt = 0
    while a:
        b = a.popleft()
        cnt = 0
        for i in a:
            cnt += 1
            if b > i:
                break
        answer.append(cnt)
    return answer