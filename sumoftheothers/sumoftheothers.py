from sys import stdin

for line in stdin:
    line = list(map(int, line.split()))
    s = sum(line)
    for x in line:
        if s - x == x:
            print(x)
            break

