from sys import stdin

# card values
values = {
    'A' : (11, 11),
    'K' : (4, 4),
    'Q' : (3, 3),
    'J' : (20, 2),
    'T' : (10, 10),
    '9' : (14, 0),
    '8' : (0, 0),
    '7' : (0, 0)
}

n, b = stdin.readline().split(); # get num of hands and dom suit
pts = 0
for _ in range(int(n) * 4):
    card = stdin.readline()
    pts += values[card[0]][0] if card[1] is b else values[card[0]][1]
print(pts)

