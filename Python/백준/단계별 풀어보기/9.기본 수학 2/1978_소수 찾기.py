from math import sqrt

def check_prime(a):
    if a < 2:
        return 0
    for i in range(2, int(sqrt(a))+1):
        if a % i == 0:
            return 0
    return 1

_ =input()
a = map(int, input().split())
cnt = 0
for i in a:
    if check_prime(i) == 1:
        cnt += 1
print(cnt)