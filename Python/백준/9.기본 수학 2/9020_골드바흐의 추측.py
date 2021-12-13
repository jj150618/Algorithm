b = [i for i in range(0,10001)]

for i in range(2, 10001):
    c = i
    if b[i] == 0:
        continue
    while 1:
        i += c
        if i > 10000:
            break
        b[i] = 0

d = int(input())
for _ in range(d):
    a = int(input())
    n = a//2
    for i in range(n):
        if (b[n + i] != 0 and b[n - i] != 0):
            print(b[n - i], b[n + i])
            break