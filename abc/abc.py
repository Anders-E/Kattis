from sys import stdin

a, b, c = sorted(map(int, stdin.readline().split()))
order = {'A': a, 'B': b, 'C': c}
print(' '.join([str(order[char]) for char in stdin.readline().strip()]))
