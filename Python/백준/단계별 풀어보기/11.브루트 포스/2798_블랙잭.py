a,b = map(int, input().split())
c = list(map(int, input().split()))

answer = 0

for i in range(a-2):
    for j in range(i+1, a-1):
        for k in range(j+1,a):
            temp = c[i]+c[j]+c[k]
            if temp <= b and temp > answer:
                answer = temp
print(answer)