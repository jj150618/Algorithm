a = int(input())
count = 0
check_1 = 0
check_6 = 1
while a>0:
    if check_1 == 0:
        a -= 1
        check_1 = 1
        count +=1
        continue
    else:
        a -= 6 * check_6
        check_6 += 1
        count +=1
print(count)