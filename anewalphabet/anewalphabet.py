from sys import stdin

alphabet = {
    'a': '@',
    'b': '8',
    'c': '(',
    'd': '|)',
    'e': '3',
    'f': '#',
    'g': '6',
    'h': '[-]',
    'i': '|',
    'j': '_|',
    'k': '|<',
    'l': '1',
    'm': '[]\/[]',
    'n': '[]\[]',
    'o': '0',
    'p': '|D',
    'q': '(,)',
    'r': '|Z',
    's': '$',
    't': "']['",
    'u': '|_|',
    'v': '\/',
    'w': '\/\/',
    'x': '}{',
    'y': '`/',
    'z': '2',
}

for c in stdin.readline():
    if c.lower() in alphabet:
        print(alphabet[c.lower()], end='')
    else:
        print(c, end='')

