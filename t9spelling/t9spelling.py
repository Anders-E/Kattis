from sys import stdin

key_mapping = {
    'a': '2',
    'b': '22',
    'c': '222',
    'd': '3',
    'e': '33',
    'f': '333',
    'g': '4',
    'h': '44',
    'i': '444',
    'j': '5',
    'k': '55',
    'l': '555',
    'm': '6',
    'n': '66',
    'o': '666',
    'p': '7',
    'q': '77',
    'r': '777',
    's': '7777',
    't': '8',
    'u': '88',
    'v': '888',
    'w': '9',
    'x': '99',
    'y': '999',
    'z': '9999',
    ' ': '0',
}

def t9spelling(text):
    t9 = ' '
    for char in text:
        if t9[-1] == key_mapping[char][0]:
            t9 += ' '
        t9 += key_mapping[char]
    return t9

n = int(stdin.readline())
for i, line in enumerate(stdin.readlines()):
    print('Case #%d:%s' % (i + 1, t9spelling(line[:-1])))

