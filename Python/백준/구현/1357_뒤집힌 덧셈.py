a,b = input().split()

c = list(a)
d = list(b)
c.reverse()
d.reverse()
e = list(str(int("".join(c)) + int("".join(d))))
e.reverse()
print(int("".join(e)))