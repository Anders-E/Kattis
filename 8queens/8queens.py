from sys import stdin

def intersects(a, b):
    ax, ay = a
    bx, by = b
    if a == b:
        return False
    if ax == bx or ay == by:
        return True
    
    ne = zip(range(ax, 9), range(ay, -1, -1))
    se = zip(range(ax, 9), range(ay, 9))
    sw = zip(range(ax, -1, -1), range(ay, 9))
    nw = zip(range(ax, -1, -1), range(ay, -1, -1))
    if b in ne or b in se or b in sw or b in nw:
        return True

    return False

board = stdin.read().replace('\n', '')
queens = [(i % 8, i // 8) for i, c in enumerate(board) if c == '*']

if len(queens) != 8:
    print("invalid")
    exit()

for a in queens:
    for b in queens:
        if intersects(a, b):
            print("invalid")
            exit()

print("valid")
