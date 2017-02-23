from sys import stdin

def odd_man_out(i):
    g = int(stdin.readline())
    codes = list(map(int, stdin.readline().split()))
    guests = {}
    for code in codes:
        if code in guests:
            guests[code] += 1
        else:
            guests[code] = 1
    for key, value in guests.items():
        if value != 2:
            print("Case #" + str(i) + ": " + str(key))
            break

n = int(stdin.readline())

for i in range(1, n + 1):
    odd_man_out(i)

