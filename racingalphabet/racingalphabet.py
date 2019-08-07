from sys import stdin
from string import ascii_uppercase
from math import pi

positions = {c: i for i, c in enumerate(ascii_uppercase + " '")}
circ = 2 * pi * 30

def race(s):
    distance = 0
    for i in range(len(s) - 1):
        p1 = positions[s[i]]
        p2 = positions[s[i + 1]]
        d = abs(p1 - p2)
        if d > 14:
            d = 28 - d
        distance += circ * d / 28

    return distance / 15 + len(s)

for res in map(race, stdin.read().splitlines()[1:]):
    print(res)
