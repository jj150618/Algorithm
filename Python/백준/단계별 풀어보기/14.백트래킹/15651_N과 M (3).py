num_range, cnt = map(int, input().split())

check_list = [0 for i in range(num_range)]
answer_list = [0 for i in range(cnt)]

def backtracing(a):
    if a == cnt:
        print(' '.join(map(str, answer_list)))
        return
    
    for i in range(num_range):
        answer_list[a] = i+1
        backtracing(a+1)

            
backtracing(0)