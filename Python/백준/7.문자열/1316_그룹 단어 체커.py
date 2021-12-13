a = int(input())
b =[]
cnt = 0
for _ in range(a):
    b.append(input())

for i in b:
    c = []
    check = i[0]
    d = len(i)
    j = 0
    while d != 0:
        if i[j] in c:
            break
        if i[j] != check:
            c.append(check)
        check = i[j]
        d -= 1
        j += 1
    if d == 0:
        cnt += 1
print(cnt)