a = int(input())
answer = 0
for i in range(1, a+1):        
    b = list(map(int, str(i)))  
    s = i + sum(b)              
    if(s == a):                 
        answer = i                   
        break
print(answer)