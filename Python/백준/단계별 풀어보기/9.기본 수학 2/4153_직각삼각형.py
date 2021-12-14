while 1:
    a = list(map(int,input().split()))
    if a[0]==a[1]==a[2]==0:
        break
    b = max(a)
    a.remove(b)
    if a[0]**2 + a[1]**2 == b**2:
        print("right")
    else:
        print("wrong")