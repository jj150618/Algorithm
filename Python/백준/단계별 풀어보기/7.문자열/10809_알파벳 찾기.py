a = input()
answer =[-1 for i in range(26)]
for i,j in enumerate(a):
    if answer[ord(j)-97] == -1:
        answer[ord(j)-97] = i
for k in answer:
    print(k, end=" ")