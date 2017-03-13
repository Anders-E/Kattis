from sys import stdin

def mirror():
    m = []
    r, _ = list(map(int, stdin.readline().split()))

    for _ in range(r):
        m.extend(stdin.readline())

    for c in reversed(m):
        print(c, end="")
    print()

t = int(stdin.readline())

for i in range(1, t + 1):
    print("Test " + str(i), end="")
    mirror()

