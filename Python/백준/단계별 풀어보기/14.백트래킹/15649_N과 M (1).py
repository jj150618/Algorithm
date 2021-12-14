range_num, count = map(int, input().split())

check_list = [0 for i in range(range_num)]
answer = [0 for i in range(count)]

def backtracking(c):
    if c == count:
        for i in answer:
            if answer[-1] == i:
                print(i)
            else:
                print(i,end=" ")
        return
    for i in range(0,range_num):
        if check_list[i] == 0:
            check_list[i] = 1
            answer[c] = i+1
            backtracking(c+1)
            check_list[i] = 0

backtracking(0)