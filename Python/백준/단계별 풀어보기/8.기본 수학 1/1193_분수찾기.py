a = int(input())
b = a
c = 0
for i in range(1,10000000):
    b -= i
    if b<=0:
        b += i - 1
        c += i
        break
if c % 2 == 0:
    print(f"{1+b}/{i-b}")
else:
    print(f"{i-b}/{1+b}")