ans = {}

_ = int(input())

a = list(map(int,input().split()))

a2 = sorted(list(set(a)))
dic = {a2[i] : i for i in range(len(a2))}
for i in a:
    print(dic[i], end = ' ')