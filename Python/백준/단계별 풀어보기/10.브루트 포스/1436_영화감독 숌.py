a = int(input())

count = 666
num = 0
while 1:
    if '666' in str(count):
        num += 1
        if num == a:
            print(count)
            break
    count += 1