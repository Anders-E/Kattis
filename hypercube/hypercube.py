from sys import stdin

def gray_code_index(x):
    index = 0
    invert = False
    for i in range(len(x)):
        if (not invert and x[i] == '1') or (invert and x[i] == '0'):
            index += 2 ** n // 2 ** (i + 1)
            invert = True
        else:
            invert = False
    return index

n, a, b = stdin.readline().split()
n = int(n)

print(gray_code_index(b) - gray_code_index(a) - 1)

