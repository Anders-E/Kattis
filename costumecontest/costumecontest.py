from sys import stdin
from collections import defaultdict

stdin.readline()
categories = defaultdict(int)

for line in map(str.rstrip, stdin.read().splitlines()):
    categories[line] += 1

min_count = min(categories.values())
print('\n'.join(sorted([cat for cat, count in categories.items() if count == min_count])))
