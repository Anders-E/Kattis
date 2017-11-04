from sys import stdin

L, x = map(int, stdin.readline().split())
p = 0 # people on the balcony
d = 0 # dismissed groups

for _ in range(x):
    event, n = stdin.readline().split()
    n = int(n)
    if event[0] == "e":
        if p + n > L:
            d += 1
        else:
            p += n
    elif event[0] == "l":
        p -= n

print(d)

