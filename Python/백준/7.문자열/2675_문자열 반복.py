c = int(input())
for _ in range(c):
    a,b = input().split()
    for i in b:
        print(i*int(a),end="")
    print("")