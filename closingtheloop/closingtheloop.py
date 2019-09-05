from sys import stdin

def read_segments():
    red = []
    blue = []
    for seg in stdin.readline().split():
        if seg[-1] == 'R':
            red.append(int(seg[:-1]))
        else:
            blue.append(int(seg[:-1]))
    
    return (sorted(red), sorted(blue))

def closing_the_loop():
    stdin.readline()
    red, blue = read_segments()
    min_segs = min(len(red), len(blue))
    if min_segs == 0:
        return 0
    return sum(red[-min_segs:]) + sum(blue[-min_segs:]) - min_segs * 2

s = int(stdin.readline())
for i in range(1, s + 1):
    print('Case #{}: {}'.format(i, closing_the_loop()))
