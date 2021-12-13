from math import sqrt

def prime(m):
    if m < 2:
        return 0
    for i in range(2, int(sqrt(m))+1):
        if m % i == 0:
            return 0
    return 1

a = int(input())
b = int(input())
c =[]

for i in range(a, b+1):
    if prime(i) == 1:
        c.append(i)

if c != []:
    print(sum(c))
    print(min(c))
else:
    print(-1)