import sys

a = int(sys.stdin.readline())
b = []
c = [0] * 8001
max_ans = 0
for _ in range(a):
    d = int(sys.stdin.readline())
    b.append(d)
    e = d + 4000
    c[e] += 1
    if c[e] > max_ans:
        max_ans = c[e]
        
f = []
for i in range(0,8001):
    if c[i] == max_ans:
        f.append(i-4000)
f.sort()
if len(f) == 1:
    ans = f[0]
else:
    ans = f[1]
b.sort()
print(round(sum(b)/len(b)))
print(b[len(b)//2])
print(ans)
print(max(b)-min(b))