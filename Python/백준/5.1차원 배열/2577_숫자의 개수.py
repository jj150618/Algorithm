a = int(input())
b = int(input())
c = int(input())
d = str(a*b*c)
answer_list = [0 for x in range(10)]

for i in d:
    for j in '0123456789':
        if i == j:
            answer_list[int(i)] += 1
            break
for k in answer_list:
    print(k)