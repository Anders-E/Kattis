from sys import stdin

def hiss(s):
    for i in range(len(s)):
        if s[i] is 's' and s[i + 1] is 's':
            return True
    return False

s = stdin.readline()
print('hiss' if hiss(s) else 'no hiss')


