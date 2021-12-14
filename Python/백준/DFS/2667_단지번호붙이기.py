n = int(input())

house = []

for i in range(n):
    house.append(list(input()))

dx = [1,-1,0,0]
dy = [0,0,1,-1]

def DFS(house, x ,y,cnt,check):
    if house[x][y] == '0':
        return False
    if house[x][y] == '1':
        house[x][y] = '0'
        cnt[check] += 1
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        
        if 0 <= nx < n and 0<= ny < n:
            DFS(house,nx,ny,cnt,check)
    return True

cnt = [0] * n**2
check = 0
for i in range(n):
    for j in range(n):
        if DFS(house,i,j,cnt,check) == True:
            check += 1
            
ans = []
for i in cnt:
    if i != 0:
        ans.append(i)
ans.sort()
print(len(ans))
for i in ans:
    print(i)