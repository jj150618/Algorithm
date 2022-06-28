a = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
b = input()
c = 0
for i in b:
    for j, k in enumerate(a):
        if i in k:
            c += j + 3

print(c)