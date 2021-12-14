def solution(n, lost, reserve):
    answer = 0
    li =[1] * n
    for j in reserve:
        li[j-1] += 1
    for i in lost:
        li[i-1] -= 1
    for i,j in enumerate(li):
        if j == 0:
            if i>0 and li[i-1] == 2:
                li[i] += 1
                li[i-1] -=1
            elif i < n-1 and li[i+1] ==2:
                li[i] += 1
                li[i+1] -= 1
            
    for k in li:
        if k >= 1:
            answer+=1
    return answer