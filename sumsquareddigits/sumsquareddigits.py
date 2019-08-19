from sys import stdin

def ssd(b, n):
    s = 0
    i = len(str(n)) - 1
    while n:
        s += (n % b) ** 2
        n //= b
    return s

p = int(stdin.readline())
for _ in range(p):
    k, b, n = map(int, stdin.readline().split())
    print(k, ssd(b, n))
