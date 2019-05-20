from sys import stdin

s = stdin.readline().strip()
res = s

for i in range(1, len(s) - 1):
    for j in range(i + 1, len(s)):
        a, b, c = s[:i][::-1], s[i:j][::-1], s[j:][::-1]
        combined = a + b + c
        if combined < res:
            res = combined

print(res)
