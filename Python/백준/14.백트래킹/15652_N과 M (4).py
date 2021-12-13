num_range, cnt = map(int, input().split())

check_list = [0 for i in range(num_range)]
answer_list = [0 for i in range(cnt)]

def backtracing(a):
    if a > 1:
        if answer_list[a-1] < answer_list[a-2]:
            return
        
    if a == cnt:
        print(' '.join(map(str, answer_list)))
        return
    
    for i in range(num_range):
        answer_list[a] = i+1
        backtracing(a+1)
            
backtracing(0)