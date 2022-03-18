from collections import deque

def solution(cacheSize, cities):
    answer = 0
    temp_cache = deque()
    cache_hit = 1
    cache_miss = 5
    for i in cities:
        j = i.lower()
        if j in temp_cache:
            answer += cache_hit
            temp_cache.remove(j)
            temp_cache.append(j)
        else:
            temp_cache.append(j)
            answer += cache_miss
            if len(temp_cache) > cacheSize:
                temp_cache.popleft()
    return answer