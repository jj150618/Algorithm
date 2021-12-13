a,b = map(int, input().split())
answer = a*60 + b -45
if answer < 0:
    answer += 24*60
print(answer//60, answer%60)