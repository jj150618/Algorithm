a = int(input())
for _ in range(a):
    answer = 0
    b = input()
    check = 0
    for i in b:
        if i =='X':
            check = 0
        else:
            check+=1
            answer += check
    print(answer)