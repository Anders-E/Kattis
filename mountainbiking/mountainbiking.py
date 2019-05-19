from sys import stdin
from math import radians, sqrt, cos

def final_speed(start):
    v = 0
    for i in range(start, n):
        v = sqrt(v ** 2 + 2 * (g * cos(theta[i])) * d[i])
    return v

def read_input():
    n, g = stdin.readline().split()
    n = int(n)
    g = float(g)
    d = []
    theta = []

    for _ in range(n):
        d_i, theta_i = map(int, stdin.readline().split())
        d.append(d_i)
        theta.append(radians(theta_i))

    return n, g, d, theta

n, g, d, theta = read_input()
for i in range(n):
    print(final_speed(i))