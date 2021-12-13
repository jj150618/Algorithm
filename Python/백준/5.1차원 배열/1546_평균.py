a = input()
b = list(map(int, input().split()))
print(sum(b)/len(b)*100/max(b))