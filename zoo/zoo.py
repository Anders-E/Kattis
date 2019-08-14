from sys import stdin
from collections import defaultdict

n = int(stdin.readline())
i = 1
while (n != 0):
    animals = defaultdict(int)
    for _ in range(n):
        animal = stdin.readline().split()[-1].lower()
        animals[animal] += 1
    
    print("List {}:".format(i))
    for animal in sorted(animals.keys()):
        print("{} | {}".format(animal, animals[animal]))
    i += 1
    n = int(stdin.readline())
