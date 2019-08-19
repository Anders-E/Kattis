from sys import stdin

p, n = map(int, stdin.readline().split())

parts = set()
for i in range(1, n + 1):
    part = stdin.readline().rstrip()
    parts.add(part)
    if len(parts) == p:
        print(i)
        exit()

print("paradox avoided")
