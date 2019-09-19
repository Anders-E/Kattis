from sys import stdin
from operator import add

def execute(instructions):
    pos = (0, 0)
    direction = (0, 1)

    for instr in instructions:
        if instr == "Left":
            if direction == (0, 1):
                direction = (-1, 0)
            elif direction == (1, 0):
                direction = (0, 1)
            elif direction == (0, -1):
                direction = (1, 0)
            elif direction == (-1, 0):
                direction = (0, -1)
        if instr == "Right":
            if direction == (0, 1):
                direction = (1, 0)
            elif direction == (1, 0):
                direction = (0, -1)
            elif direction == (0, -1):
                direction = (-1, 0)
            elif direction == (-1, 0):
                direction = (0, 1)
        if instr == "Forward":
            pos = tuple(map(add, pos, direction))
    
    return pos

target = tuple(map(int, stdin.readline().split()))
stdin.readline()
instructions = stdin.read().splitlines()

i = 0
tries = 0
fix = None
while execute(instructions) != target:
    if instructions[i] == "Left":
        instructions[i] = "Right"
    elif instructions[i] == "Right":
        instructions[i] = "Forward"
    elif instructions[i] == "Forward":
        instructions[i] = "Left"
    fix = instructions[i]
    tries += 1
    if tries == 3:
        i += 1
        tries = 0

print("{} {}".format(i + 1, fix))
