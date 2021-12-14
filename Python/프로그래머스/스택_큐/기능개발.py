import math # 올림 사용을 위한 라이브러리
from collections import deque # 큐 자료구조 사용을 위한 라이브러리

def solution(progresses, speeds):
    answer = []
    work = []
    # 남은 작업량과 속도를 통해 필요한 일수 계산
    for i in range(len(progresses)):
        # 잔업이 조금이라도 남아도 하루를 추가해야 하므로 ceil() 사용(올림)
        work.append(math.ceil((100-progresses[i])/speeds[i]))
    a = deque(work)
    cnt = 0
    # 큐를 이용하여 먼저 시작해야될 일부터 처리
    while a:
        b = a.popleft()
        cnt += 1
        # 먼저 처리해야할 일보다 작업이 빨리 끝나는 경우 카운트
        # 마지막 일의 경우, 큐 자료구조에 더이상 데이터가 없으므로
        # while a 를 먼저 입력하여, index 에러 방지
        while a and a[0] <= b:
            cnt += 1
            a.popleft()
        answer.append(cnt)
        cnt = 0
        
    return answer