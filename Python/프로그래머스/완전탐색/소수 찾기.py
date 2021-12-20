# 순열을 사용하기 위한 라이브러리 호출
from itertools import permutations

# 에라토스테네스의 체를 이용하여 소수를 찾아준다.
def find_prime(array,n):
    array[0] = 0
    array[1] = 0
    for i in range(2,n+1):
        if array[i] == 1:
            temp = i + i
            while temp <= n:
                array[temp] = 0
                temp += i
            
def solution(numbers):
    answer = 0
    # numbers의 숫자를 조합해 실제 수를 만들 때, 중복 요소 제거를 위해서 set 선언
    total_set = set()
    # numbers의 카드를 이용할 때, 1개부터 시작하여 numbers의 크기만큼 만들 수 있으므로,
    # 순열을 다음과 같이 이용(1부터 numbers 길이만큼)
    for i in range(1,len(numbers)+1):
        for j in permutations(list(numbers),i):
            # 만들어진 순열(문자열의 리스트들)을 합쳐서 int로 변경하여 set에 삽입
            temp = ""
            for k in j:
                temp += k
            total_set.add(int(temp))
    # 정렬을 하여, 맨 마지막에 있는 최대값을 이용하여 범위 설정
    a = sorted(list(total_set))
    array = [1] * (a[-1]+2)

    # 최대값 범위까지의 소수의 판정여부를 array에 담고
    # 우리가 가지고 있는 순열들의 모임을 반복문을 통해서 소수인지 확인
    find_prime(array,a[-1])
    for i in a:
        if array[i] == 1:
            answer += 1
    return answer