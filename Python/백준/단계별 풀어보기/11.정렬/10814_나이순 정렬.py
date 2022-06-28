a = int(input())
b = []

for i in range(a):
    age, name = map(str, input().split())
    b.append((int(age), name))

b.sort(key = lambda x : x[0])

for j in b:
    print(j[0], j[1])