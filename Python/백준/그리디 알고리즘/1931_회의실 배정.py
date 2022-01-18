a = int(input())
work_list = []

for _ in range(a):
    work_list.append(list(map(int,input().split())))

work_list.sort(key = lambda x : x[0])
work_list.sort(key = lambda x : x[1])

work_end = work_list[0][1]
count = 1
for i in range(1,a):
    if work_list[i][0] >= work_end:
        count += 1
        work_end = work_list[i][1]
print(count)
