a = [0] * 10001
a[0]=1
for i in range(1,10001):
    b = i


    if a[b] == 0:
        while b < 10001:
            sum1 = b
            for j in str(b):
                sum1 += int(j)
            b = sum1
            if b < 10001:
                if a[b] == 1:
                    break
                a[b] = 1
for i,j in enumerate(a):
    if j == 0:
        print(i)