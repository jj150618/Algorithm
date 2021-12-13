total = int(input())

if total < 100:
    print(total)
else:
    cnt = 99
    for a in range(100,total+1):
        check = 0
        while a>=100:
            b = a % 10
            c = a//10 % 10
            d = a//100 % 10
            if (b-c) != (c-d):
                check = 1
                break
            a //= 10
        if check == 0:
            cnt += 1
    print(cnt)