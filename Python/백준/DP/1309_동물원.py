a = int(input())

dp = [[0,0,0] for _ in range(a+1)]

dp[1] = [1,1,1]

for i in range(2,a+1):
    temp = sum(dp[i-1])
    temp1 = temp - dp[i-1][1]
    dp[i] = [temp, temp1, temp1]

print(sum(dp[a]))
