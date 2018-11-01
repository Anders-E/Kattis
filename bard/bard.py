from sys import stdin

n = int(stdin.readline())
e = int(stdin.readline())

songs_known = {x: set() for x in range(1, n + 1)}
song = 0

for evening in range(e):
    bard_present = False
    evening_songs = set()
    villagers = list(map(int, stdin.readline().split()[1:]))
    for villager in villagers:
        if villager == 1:
            bard_present = True
            song += 1
        else:
            evening_songs |= songs_known[villager]
    for villager in villagers:
        if bard_present:
            songs_known[villager].add(song)
        else:
            songs_known[villager] |= evening_songs

for villager in range(1, n + 1):
    if len(songs_known[villager]) == song:
        print(villager)

