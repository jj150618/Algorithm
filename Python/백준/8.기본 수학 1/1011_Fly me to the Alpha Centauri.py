a = int(input())
for i in range(a):
    b, c = map(int, input().split())
    d = c - b
    num = 1
    while True:
        if num**2 <= d < (num+1)**2:
            break
        num += 1
    if num**2 == d:
        print((num*2)-1)
    elif num**2 <d<= num**2+num:
        print(num*2)
    else:
        print((num*2)+1)