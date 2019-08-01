from sys import stdin
from collections import defaultdict

cards = stdin.readline().split()
counts = defaultdict(int)

for card in cards:
    counts[card[0]] += 1

print(max(counts.values()))
