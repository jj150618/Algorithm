x = []
y = []
for _ in range(3):
    a,b =map(int,input().split())
    x.append(a)
    y.append(b)
ans_x = 0
ans_y = 0
for i in range(3):
    if x.count(x[i]) == 1:
        ans_x = x[i]
    if y.count(y[i]) == 1:
        ans_y = y[i]
print(ans_x, ans_y)