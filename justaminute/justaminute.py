from sys import stdin

n = int(stdin.readline())
ms = 0
ss = 0
for _ in range(n):
    m, s = map(int, stdin.readline().split())
    ms += m
    ss += s

sl = ss / ms / 60

print(sl if sl > 1 else "measurement error")
