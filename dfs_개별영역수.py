import sys
from copy import deepcopy
sys.setrecursionlimit(10000)

def dfs(y, x, color):
    t[y][x] = '0'
    for dy, dx in d:
        Y, X = y+dy, x+dx
        if (0 <= Y < N) and (0 <= X < N) and t[Y][X] in color:
            dfs(Y, X, color)

N = int(input())
graph = [list(input()) for _ in range(N)]
d = [(-1, 0), (1, 0), (0, -1), (0, 1)]
# 만약에 서로 다른 영역의 수 총합을 구할 꺼면
# for colors in [['R', 'G', 'B']]:
# R,G를 같은 영역으로 보고 서로 다른 영역의 수 총합을 구할 꺼면
# for colors in [["RG", 'B']]:
# R일 때의 영역, G일 때의 영역, B일 때의 영역을 각각 구할 꺼면
for colors in [['R'], ['G'], ['B']]:
    t, cnt = deepcopy(graph), 0
    for i in range(N):
        for j in range(N):
            for color in colors:
                if t[i][j] in color:
                    dfs(i, j, color)
                    cnt += 1
    print(cnt, end=' ')
