a,b = map(int,input().split())
c=[]
for _ in range(a):
    c.append(input())

answer = 64
check1 = 0
test ="BW"
for i in range(a-7):
    for j in range(b-7):
        count1 = 0
        count2 = 0
        for k in range(8):
            for l,m in enumerate(c[i+k][j:j+8]):
                if m != test[check1%2]:
                    count1 += 1
                if m != test[(check1+1)%2]:
                    count2 += 1
                if l != 7:
                    check1 += 1
        if count1 < answer:
            answer = count1
        if count2 < answer:
            answer = count2
print(answer)