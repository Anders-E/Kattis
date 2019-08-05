from sys import stdin

a = 1
b = 0
for _ in range(int(stdin.read())):
    a, b = (a - a + b, a + b)

print(a, b)
