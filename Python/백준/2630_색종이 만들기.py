num = int(input())
array = []
for _ in range(num):
    a = list(map(int,input().split()))
    array.append(a)

while num:
    check_blue = 0
    check_white = 0
    for i in array:
        if check_blue > 0 and check_white > 0:
            break
        if sum(i) == num:
            check_blue += 1
        elif sum(i) == 0:
            check_white += 1
