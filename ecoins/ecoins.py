from sys import stdin
from math import sqrt

def read_int_tuple():
    return tuple(map(int, stdin.readline().split()))

def e_modulus(c, it):
    return sqrt(c ** 2 + it ** 2)

def coins_required(s, ecoins, n=0, c=0, it=0):
    modulus = e_modulus(c, it)
    if modulus == s:
        return n
    if modulus > s:
        return 999
    req = 999
    for ecoin in ecoins:
        new_req = coins_required(s, ecoins, n + 1, c + ecoin[0], it + ecoin[1])
        if new_req and new_req < req:
            req = new_req
    return req

n = int(stdin.readline())

if __name__ == "__main__":
    for _ in range(n):
        m, s = read_int_tuple()
        ecoins = set()
        for _ in range(m):
            ecoins.add(read_int_tuple())
        stdin.readline() # empty line between each problem input
        print(coins_required(s, ecoins) or "not possible")
