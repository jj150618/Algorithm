a = int(input())
b = [[' ' for _ in range(a)]for _ in range(a)]

def f(x,y,n):
    if n == 3:
        for i in range(3):
            for j in range(3):
                if i == 1 and j == 1:
                    continue
                b[x+i][y+j] = '*'
        return 
                
    for i in range(3):
        for j in range(3):
            if i == j == 1:
                continue
            f(x+i*n//3, y+j*n//3, n//3)

f(0,0,a)
for i in b:
    for j in i:
        print(j,end="")
    print()