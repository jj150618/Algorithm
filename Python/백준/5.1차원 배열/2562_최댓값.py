max_num = 0
index = 0
for i in range(9):
    a = int(input())
    if a > max_num:
        max_num = a
        index = i +1
print(max_num)
print(index)