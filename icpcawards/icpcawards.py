from sys import stdin

teams = map(str.split, stdin.read().splitlines()[1:])
winners = set()

for uni, team in teams:
    if len(winners) == 12:
        break
    if uni not in winners:
        print(uni, team)
        winners.add(uni)
