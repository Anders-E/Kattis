from sys import stdin

words = stdin.read().split()
compound_words = set()

for a in words:
    for b in words:
        if a != b:
            compound_words.add(a + b)

for word in sorted(compound_words):
    print(word)
