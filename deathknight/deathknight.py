from sys import stdin

def dk(s):
    for i in range(1, len(s) + 1):
        if (s[i - 1] == 'C'and s[i] == 'D'):
            return 0
    return 1

n =  int(stdin.readline())
wins = 0

for _ in range(n):
    wins += dk(stdin.readline())

print(wins)

