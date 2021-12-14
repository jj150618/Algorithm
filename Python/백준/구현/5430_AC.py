from collections import deque

for _ in range(int(input())):
    func = input() # 함수 문자열
    size = int(input()) # 배열 크기
    temp_array = input() # 배열 모양의 문자열 (변환 필요)
    # map 함수를 사용하여 int를 바로 넣어줄 것인데,
    # 여기서 빈 문자열을 int로 만드려고 하면 에러 발생하여 예외처리
    if temp_array == '[]':
        array = []
    else:
        # 슬라이싱을 이용하여 맨 처음과 맨 뒤를 제외
        array = deque(map(int,temp_array[1:-1].split(',')))
    
    # 배열의 크기보다 버리는 함수인 D가 더 많으면 바로 에러처리
    cnt_D = 0
    for i in func:
        if i == 'D':
            cnt_D += 1
            
    if size < cnt_D:
        print("error")
        continue
    
    # 기본적으로 함수 R에 의해서 실행되는 reverse() 연산은 시간복잡도 O(n)
    # 함수 R이 여러 개 있을 때, 순서대로 R 연산을 하면 시간복잡도는 O(n*m)으로 커짐
    # 함수 R의 갯수를 따로 카운트하고, R이 들어올 때마다 pop()이나 popleft()를 바꿔가면서 사용
    # check_pop이 1 이면 popleft() -1 이면 pop()을 사용
    check_pop = 1
    cnt_R = 0
    for i in func:
        if i == 'R':
            cnt_R += 1
            check_pop *= -1
        else:
            if check_pop == 1:
                array.popleft()
            else:
                array.pop()
    # 실질적으로 R의 갯수가 홀수일때만, reverse 한번 실행
    if cnt_R % 2 == 1:
        array.reverse()
    print(str(list(array)).replace(' ',''))