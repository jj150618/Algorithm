def solution(array, commands):
    answer = []
    for i in commands:
        a = array
        b = a[i[0]-1:i[1]]
        b.sort()
        answer.append(b[i[2]-1])
    
    return answer