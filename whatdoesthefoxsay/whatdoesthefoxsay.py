from sys import stdin

n = int(stdin.readline())

for _ in range(n):
    rec = stdin.readline().rstrip().split(" ")
    sounds = set()
    while True:
        sound = stdin.readline().rstrip()
        if sound == "what does the fox say?":
            break
        sounds.add(sound.split("goes")[1].lstrip())
    print(" ".join(filter(lambda x: x not in sounds, rec)))
