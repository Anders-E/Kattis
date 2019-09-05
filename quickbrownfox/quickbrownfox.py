from sys import stdin
from string import ascii_lowercase

alphabet = set(ascii_lowercase)
for line in stdin.read().splitlines()[1:]:
    diff = alphabet - set(line.lower())
    print("pangram" if len(diff) is 0 else "missing {}".format("".join(sorted(list(diff)))))
