from sys import stdin

n = int(stdin.readline())
bats = 0
for bat in stdin.readline().split():
    if int(bat) == -1:
        n -= 1
    else:
        int(bats) += bat

print(bats / n)

