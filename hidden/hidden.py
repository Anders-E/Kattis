from sys import stdin

def hidden(pw, msg):
    for c in msg:
        if c in pw:
            if c is not pw[0]:
                return 'FAIL'
            pw = pw.replace(c, '', 1)
    return 'PASS' if len(pw) is 0 else 'FAIL'

pw, msg = stdin.readline().split(' ')
print(hidden(pw, msg))

