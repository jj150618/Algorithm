a = int(input())
if a < 6:
    dp = [-1 for x in range(6)]
else:
    dp = [-1 for x in range(a+1)]
dp[3]=1
dp[5]=1
for i in range(6,a+1):
    if dp[i - 5] > 0:
        dp[i] = dp[i-5]+1
    elif dp[i - 3] > 0:
        dp[i] = dp[i-3]+1
print(dp[a])