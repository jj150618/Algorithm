a,b = input().split()
c,d = a[::-1],b[::-1]
if int(c) > int(d):
    print(c)
else:
    print(d)