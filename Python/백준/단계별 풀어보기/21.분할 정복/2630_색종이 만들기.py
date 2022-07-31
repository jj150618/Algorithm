import sys

n = int(sys.stdin.readline())
arr = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]

white = 0
blue = 0

def dq(x, y, n):
    global white, blue
    check = arr[x][y]
    for i in range(x, x+n):
        for j in range(y, y+n):
            if check != arr[i][j]:
                dq(x, y, n//2)
                dq(x, y + n//2, n//2)
                dq(x + n//2, y, n//2)
                dq(x + n//2, y + n//2, n//2)
                return
    if check == 0:
        white += 1
    else:
        blue += 1

dq(0, 0, n)
print(white)
print(blue)