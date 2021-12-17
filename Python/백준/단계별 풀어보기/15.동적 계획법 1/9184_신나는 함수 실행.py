array = [[[0]*21 for i in range(21)] for i in range(21)]

def w(a,b,c):
    if a <= 0 or b <= 0 or c <= 0:
        return 1

    if a > 20 or b > 20 or c > 20:
        return w(20, 20, 20)
    
    if array[a][b][c]:
        return array[a][b][c]
    
    if a < b and b < c:
        array[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c)
        return array[a][b][c]
    array[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1)
    return array[a][b][c]

while 1:
    a,b,c = map(int,input().split())
    ans = w(a,b,c)
    if a==-1 and b==-1 and c==-1:
        break
    print(f'w({a}, {b}, {c}) = {ans}')
