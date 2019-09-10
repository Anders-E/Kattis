from sys import stdin

n, m = map(int, stdin.readline().split())
blank_cols = [True] * m

for line in stdin.read().splitlines():
    for i, c in enumerate(line):
        if c == '$':
            blank_cols[i] = False

print(sum(blank_cols) + 1)
