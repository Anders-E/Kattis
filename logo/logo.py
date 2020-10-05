from sys import stdin
from math import radians, cos, sin, sqrt

pos = (0, 0)
v = 0

def read_program(n):
    program = []
    for _ in range(n):
        name, value = stdin.readline().split()
        value = int(value)
        program.append((name, value))
    return program

def move(d):
    global pos, v
    x = pos[0] + d * cos(radians(v))
    y = pos[1] + d * sin(radians(v))
    pos = (x, y)

def fd(value):
    move(value)

def bk(value):
    move(-value)

def rt(value):
    global v
    v -= value

def lt(value):
    global v
    v += value

def dist():
    global pos
    return sqrt(pos[0] ** 2 + pos[1] ** 2)

def logo(program):
    global pos, v
    for name, value in program:
        {'fd': fd, 'bk': bk, 'rt': rt, 'lt': lt}[name](value)
    return round(dist())


n = int(stdin.readline())
for _ in range(n):
    m = int(stdin.readline())
    program = read_program(m)
    print(logo(program))
    pos = (0, 0)
    v = 0
