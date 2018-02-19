from sys import stdin

def help(line):
    if line == 'P=NP\n':
        return 'skipped'
    a, b = list(map(int, line.split('+')))
    return a + b

n = int(stdin.readline())

for line in stdin.readlines():
    print(help(line))

