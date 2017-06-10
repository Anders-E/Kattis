from sys import stdin

set_num = 1

n = int(stdin.readline())

while(n != 0):
    print("SET", set_num)
    set_num += 1
    names1 = []
    names2 = []
    for i in range(n):
        name = stdin.readline()
        if (i % 2 == 0):
            names1.append(name)
        else:
            names2.append(name)
    for name in names1:
        print(name)
    for name in reversed(names2):
        print(name)
    n = int(stdin.readline())

