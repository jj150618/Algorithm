num_range, cnt = map(int, input().split())

check_list = [0 for i in range(num_range)]
answer_list = [0 for i in range(cnt)]

def backtracing(a):
    if a > 1:
        if answer_list[a-1] < answer_list[a-2]:
            return
        
    if a == cnt:
        for i in answer_list:
            if answer_list[-1] == i:
                print(i)
            else:
                print(i, end=" ")
        return
    
    for i in range(num_range):
        if check_list[i] == 0:
            check_list[i] = 1
            answer_list[a] = i+1
            backtracing(a+1)
            check_list[i] = 0
            
backtracing(0)