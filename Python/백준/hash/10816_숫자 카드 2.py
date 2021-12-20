_ = int(input())
a = {}
b = map(int,input().split())

for i in b:
    if i not in a:
        a[i] = 1
    else:
        a[i] += 1

_ = int(input())
c = map(int,input().split())

for i in c:
    if i in a:
        print(a[i],end=" ")
    else:
        print("0",end=" ")