from collections import Counter

def solution(participant, completion):
    a = Counter(participant)
    b = Counter(completion)
    c = a - b
    for i in c:
        answer = i
    return answer