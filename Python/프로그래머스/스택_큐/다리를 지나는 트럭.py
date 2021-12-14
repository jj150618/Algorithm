# 실제 다리에서 트럭의 움직임을 일일이 확인하는 방법
from collections import deque

def solution(bridge_length, weight, truck_weights):
    answer = 0
    # 다리 위의 현재 트럭의 무게와 위치 파악을 위한 자료구조 큐 생성
    # 0은 무게 때문에 다른 차량이 존재하지 않는 경우를 컨트롤하기 위한 용도
    bridge = deque([0] * bridge_length)
    # 많은 트럭이 존재할 경우, 맨 앞의 트럭 빼는 연산이 오래 걸리니 큐로 변경
    truck = deque(truck_weights)
    # 다리 위의 존재하는 트럭의 무게를 구하기 위한 변수 선언
    sum_v = 0
    # 대기 트럭이 빈 상태에서 트럭이 다 빠져나오면 종료
    while bridge:
        answer += 1
        a = bridge.popleft()
        # sum(bridge) 대신 sum_v를 통해서 시간 줄이기
        sum_v -= a
        # 대기 트럭이 없으면, 
        if truck:
            # 대기 트럭이 다리에 추가되었을 때, 무게보다 아래면 다리 큐에 트럭 추가
            if sum_v + truck[0] <= weight:
                b = truck.popleft()
                bridge.append(b)
                sum_v += b
            # 무게가 초과되면, 다리 큐에 트럭을 추가하지 않고 0을 추가하여
            # 다리 크기 유지 및 answer 카운트 용도
            else:
                bridge.append(0)
    return answer