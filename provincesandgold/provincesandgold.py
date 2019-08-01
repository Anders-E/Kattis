from sys import stdin

g, s, c = map(int, stdin.readline().split())
buying_power = g * 3 + s * 2 + c

victory = ""
treasure = ""

if buying_power >= 8:
    victory = "Province"
    treasure = "Gold"
elif buying_power >= 6:
    victory = "Duchy"
    treasure = "Gold"
elif buying_power >= 5:
    victory = "Duchy"
    treasure = "Silver"
elif buying_power >= 3:
    victory = "Estate"
    treasure = "Silver"
elif buying_power >= 2:
    victory = "Estate"
    treasure = "Copper"
else:
    treasure = "Copper"

if victory:
    print("{} or {}".format(victory, treasure))
else:
    print(treasure)
