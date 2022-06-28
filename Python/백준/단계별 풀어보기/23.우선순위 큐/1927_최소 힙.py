import heapq
import sys

input = sys.stdin.readline
cnt = int(input())

heap = []

while cnt:
    a = int(input())
    if a > 0:
        heapq.heappush(heap, a)
    else:
        if len(heap) == 0:
            print(0)
        else:
            b = heapq.heappop(heap)
            print(b)
    cnt -= 1
