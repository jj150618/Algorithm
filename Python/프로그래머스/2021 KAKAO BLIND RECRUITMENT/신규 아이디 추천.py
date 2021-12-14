import re

def solution(new_id):
    new_id = new_id.lower()
    new_id = re.sub('[^0-9a-z-_.]','',new_id)
    new_id = re.sub('[.]{2,}','.',new_id)
    new_ans = ''
    for i,j in enumerate(new_id):
        if i == 0 or i == len(new_id) -1:
            if j == '.':
                continue
        new_ans += j
    
    if new_ans == '':
        new_ans = 'a'
    if len(new_ans) >= 16:
        new_ans = new_ans[0:15]
    if new_ans[-1] == '.':
        new_ans = new_ans[:-1]
    while len(new_ans) < 3:
        new_ans += new_ans[-1]
    print(new_ans)
    answer = new_ans
    return answer