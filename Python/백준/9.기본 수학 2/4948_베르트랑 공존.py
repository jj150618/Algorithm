b = [i for i in range(0,123456*2+1)]

for i in range(2, 123456*2+1):
    c = i
    if b[i] == 0:
        continue
    while 1:
        i += c
        if i > 123456*2+1:
            break
        b[i] = 0
        
while 1:
    a = int(input())
    if a == 0:
        break
        
    cnt = 0
    for i in range(a+1, 2*a+1):
        if b[i] != 0:
            cnt += 1
    print(cnt)