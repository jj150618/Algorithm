a = int(input())
b = []
c = []
for _ in range(a):
    d,e = map(int,input().split())
    b.append(d)
    c.append(e)

for i in range(a):
    cnt = 1
    for j in range(a):
        if b[i] < b[j] and c[i] < c[j]:
            cnt += 1
    print(cnt,end=" ")