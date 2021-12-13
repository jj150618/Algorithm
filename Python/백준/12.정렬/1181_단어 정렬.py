a = int(input())
b = set()
for i in range(a):
    b.add(input())
c = list(b)
c.sort()
c.sort(key=lambda x: len(x))
for i in c:
    print(i)