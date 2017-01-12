from sys import stdin

n = int(stdin.readline())
cups = {}

for _ in range(n):
    a, b = stdin.readline().split()
    if a.isnumeric(): # diameter color
        cups[int(a)] = b
    else:             # color radius
        cups[int(b) * 2] = a

for key in sorted(cups.keys()):
    print(cups[key])

