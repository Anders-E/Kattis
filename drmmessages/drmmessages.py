from sys import stdin
import string

def rotate1(s):
    v = sum(map(lambda c: vals[c], s))
    return [chars[(vals[c] + v) % 26] for c in s]

def rotate2(s1, s2):
    s = []
    for i in range(len(s1)):
        c1 = s1[i]
        c2 = s2[i]
        s.append(chars[(vals[c1] + vals[c2]) % 26])
    return "".join(s)

def decrypt(s):
    s1 = rotate1(s[:len(s) // 2])
    s2 = rotate1(s[len(s) // 2:])
    return rotate2(s1, s2)

chars = {i: c for i, c in enumerate(string.ascii_uppercase)}
vals = {c: i for i, c in enumerate(string.ascii_uppercase)}
s = stdin.readline().rstrip()
print(decrypt(s))
