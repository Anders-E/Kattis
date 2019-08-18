from sys import stdin

a, b, c = map(int, stdin.read().split())
print(max(b - a, c - b) - 1)
