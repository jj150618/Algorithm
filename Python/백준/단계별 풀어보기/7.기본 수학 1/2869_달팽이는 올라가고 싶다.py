a,b,c=map(int,input().split())

d = (c - a) / (a-b) +1
if d == int(d):
    print(int(d))
else:
    print(int(d)+1)