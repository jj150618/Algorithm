from math import sqrt

a = int(input())
b = int(sqrt(a))
i = 2
while 1:
    check = 0
    while check == 0:
        if a % i == 0:
            a = a//i
            print(i)
        else:
            check = 1
    i += 1
    if i > b:
        if a != 1:
            print(a)
        break