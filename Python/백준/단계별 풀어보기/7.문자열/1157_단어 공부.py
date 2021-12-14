a = input()
list_alp = [0 for i in range(26)]
max_count = 0
answer = "?"
for i in a:
    if ord(i)>= 97:
        list_alp[ord(i)-97] += 1
    else:
        list_alp[ord(i)-65] += 1
    
for i,j in enumerate(list_alp):
    if j > max_count:
        max_count = j
        answer = chr(i+65)
    elif max_count == j:
        answer = "?"