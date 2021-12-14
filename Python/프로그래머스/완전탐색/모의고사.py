def solution(answers):
    d = len(answers)
    a = [1,2,3,4,5] * (d//5+1)
    b = [2,1,2,3,2,4,2,5] * (d//8+1)
    c = [3,3,1,1,2,2,4,4,5,5] * (d//10+1)
    sum_a = sum_b = sum_c = 0
    for i,j in enumerate(answers):
        if j == a[i]:
            sum_a += 1
        if j == b[i]:
            sum_b += 1
        if j == c[i]:
            sum_c += 1
    f = max(sum_a,sum_b,sum_c)
    answer = []
    for i,j in enumerate([sum_a,sum_b,sum_c]):
        if j == f:
            answer.append(i+1)
    return answer