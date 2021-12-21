a = int(input())
line_list = []

for _ in range(a):
    line_list.append(list(map(int,input().split())))

line_list.sort(key = lambda x : x[0])

dp = [1] * a
for i in range(a):
    for j in range(i):
        if line_list[i][1] > line_list[j][1] and dp[i] < dp[j] + 1:
            dp[i] = dp[j] + 1
print(a-max(dp))
