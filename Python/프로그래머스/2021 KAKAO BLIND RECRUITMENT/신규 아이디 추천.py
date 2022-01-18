import re

def solution(new_id):
    # lower()를 이용해 소문자로 변경
    new_id = new_id.lower()
    # 정규표현식을 이용하여, 알파벳 소문자, 숫자, 빼기(-), 밑줄(_), 마침표(.)를 제외한 모든 문자를 빈문자로 치환
    new_id = re.sub('[^0-9a-z-_.]','',new_id)
    # 마침표(.)가 2번 이상 연속된 부분을 하나의 마침표(.)로 치환
    new_id = re.sub('[.]{2,}','.',new_id)
    
    new_ans = ''
    for i,j in enumerate(new_id):
        # 처음이나 마지막에 마침표(.)가 있으면 continue를 통해 문자열을 더하지 않고 넘김
        if i == 0 or i == len(new_id) -1:
            if j == '.':
                continue
        new_ans += j
    
    # 빈 문자열이면, a 대입
    if new_ans == '':
        new_ans = 'a'
    # 문자열의 길이가 16이상이면, 길이 15로 설정
    if len(new_ans) >= 16:
        new_ans = new_ans[0:15]
        # 제거 후에 마지막 문자열이 마침표면 마침표를 제외한 문자열로 설정
        if new_ans[-1] == '.':
            new_ans = new_ans[:-1]
    # 문자열의 길이가 2 이하이면, 3이 될 때까지 마지막 문자열을 더해줌
    while len(new_ans) < 3:
        new_ans += new_ans[-1]
    answer = new_ans
    return answer