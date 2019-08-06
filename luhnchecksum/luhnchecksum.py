from sys import stdin

def luhn(n):
    checksum = sum(map(transform, n[-2::-2])) + sum(map(int, n[-1::-2]))
    return "PASS" if checksum % 10 == 0 else "FAIL"

def transform(d):
    d = int(d)
    if d * 2 > 9:
        return digitSum(d * 2)
    return d * 2

def digitSum(x):
    s = 0
    while (x):
        s += x % 10
        x //= 10
    return s

for res in map(luhn, stdin.read().splitlines()[1:]):
    print(res)
