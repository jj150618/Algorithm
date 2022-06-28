a = int(input())

cnt = 0
ans = a
while True:
    if a >= 10:
        b = a//10
        c = a%10
    else:
        b = 0
        c = a
    a = (b + c)%10 + c*10
    cnt += 1
    if a == ans:
        print(cnt)
        break