import math

a,b = map(int, input().split())

def is_prime_number(n):
    array = [1 for i in range(n+1)]

    for i in range(2, int(math.sqrt(n)) + 1): 
        if array[i] == 1: 

            j = 2
            while i * j <= n:
                array[i * j] = 0
                j += 1

    return [ i for i in range(2, n+1) if array[i] ]

for i in is_prime_number(b):
    if i >= a:
        print(i)