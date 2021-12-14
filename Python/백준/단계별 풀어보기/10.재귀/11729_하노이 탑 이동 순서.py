n = int(input())
a = []
total = 1
def top(n,a,b,c):
    if n == 1:
        print(a,c)
    else:
        top(n-1,a,c,b)
        print(a,c)
        top(n-1,b,a,c)
for i in range(n - 1):
    total = total * 2 + 1
print(total)
top(n,1,2,3)