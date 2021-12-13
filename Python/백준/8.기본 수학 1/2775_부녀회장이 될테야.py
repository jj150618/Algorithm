count = int(input())
while count > 0:  
    a = int(input())
    b= int(input())

    c = [[0 for i in range(b)] for j in range(a+1)]
    for i in range(b):
        c[0][i] = i+1
    for i in range(1, a+1):
        for j in range(b):
            for k in range(j+1):
                c[i][j] += c[i-1][k]
    print(c[a][b-1])
    count -= 1