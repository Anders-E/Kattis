from sys import stdin
from collections import defaultdict

lines = stdin.read().splitlines()
dictionary = defaultdict(lambda: "eh")

i = 0
while lines[i]:
    value, key = lines[i].split()
    dictionary[key] = value
    i += 1

for line in lines[i + 1:]:
    print(dictionary[line])
