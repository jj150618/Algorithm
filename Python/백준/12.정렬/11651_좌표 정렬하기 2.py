a = int(input())
b = []

for _ in range(a):
    b.append(list(map(int,input().split())))

b.sort(key = lambda x : (x[1],x[0]))

for i in b:
    print(i[0],i[1])