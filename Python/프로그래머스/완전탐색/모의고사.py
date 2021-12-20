def solution(answers):
    # 들어온 정답에 맞게 끔, 비교할 문자열을 만들어 준다.
    # 해당 a,b,c를 인덱스 만큼 나머지를 이용해서 계속해서 도는 구조를 만들 수도 있지만,
    # 해당 문제에서 정답의 최대 길이는 10000이여서, 큰 공간 복잡도를 요구하지 않기 때문에,
    # 다음과 같이 구현하였다.
    d = len(answers)
    a = [1,2,3,4,5] * (d//5+1)
    b = [2,1,2,3,2,4,2,5] * (d//8+1)
    c = [3,3,1,1,2,2,4,4,5,5] * (d//10+1)
    sum_a = sum_b = sum_c = 0
    # 정답을 돌면서 완전탐색 시작
    for i,j in enumerate(answers):
        if j == a[i]:
            sum_a += 1
        if j == b[i]:
            sum_b += 1
        if j == c[i]:
            sum_c += 1
    # 가장 높은 점수 입력
    f = max(sum_a,sum_b,sum_c)
    answer = []
    # 여러 명일 경우, 해당 위치의 사람을 순서대로 입력
    for i,j in enumerate([sum_a,sum_b,sum_c]):
        if j == f:
            answer.append(i+1)
    return answer