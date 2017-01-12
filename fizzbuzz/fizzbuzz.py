from sys import stdin

x, y, n = list(map(int, stdin.readline().split()))

for i in range (1, n+1):
    line = ""
    if i % x is 0:
        line += "Fizz"
    if i % y is 0:
        line += "Buzz"
    print(line or i)

