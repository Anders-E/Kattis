from sys import stdin
from collections import defaultdict

t = int(stdin.readline())
for _ in range(t):
    n = int(stdin.readline())
    toys = defaultdict(int)
    for _ in range(n):
        toy, count = stdin.readline().split()
        count = int(count)
        toys[toy] += count
    print(len(toys))
    for toy in sorted(toys.items(), key=lambda toy: (-toy[1], toy[0])):
        print(toy[0], toy[1])
