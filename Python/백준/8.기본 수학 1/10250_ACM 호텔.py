a = int(input())
for _ in range(a):
    b,c,d = map(int,input().split())
    if d%b != 0:
        print(d%b,end="")
        e = d//b + 1
        if e < 10:
            print(f"0{e}")
        else:
            print(e)
    else:
        print(b,end="")
        e = d//b
        if e < 10:
            print(f"0{e}")
        else:
            print(e)