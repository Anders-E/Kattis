from sys import stdin
from math import sqrt
from collections import defaultdict

import cProfile

def memoize(f):
    memo = {}
    def helper(c, it):
        if (c, it) not in memo:            
            memo[(c, it)] = f(c, it)
        return memo[(c, it)]
    return helper

def e_modulus(c, it):
    return sqrt(c ** 2 + it ** 2)

e_modulus = memoize(e_modulus)

def coins_required(s, ecoins, n=0, c=0, it=0, min_n=999, visited=defaultdict(lambda: 999)):
    # Cancel search if already visited in less amount of coins
    # or if already past already found minimum
    if visited[(c, it)] < n or n >= min_n:
        return 999

    # Mark position as visited
    visited[(c, it)] = n

    # Calculate e-modulus
    modulus = e_modulus(c, it)

    # Return number of coins if correct e-modulus
    if modulus == s:
        return n
    # Cancel search if past goal
    if modulus > s:
        return 999

    # Continue search
    for ecoin in ecoins:
        min_n = min(min_n, coins_required(s, ecoins, n + 1, c + ecoin[0], it + ecoin[1], min_n, visited))

    return min_n

def main():
    # Read input
    raw_input = stdin.read()
    input = [int(x) for x in reversed(raw_input.split())]
    
    # No. of problems
    n = input.pop()

    # Solve each problem
    for _ in range(n):
        m, s = (input.pop(), input.pop())
        ecoins = set()
        for _ in range(m):
            ecoins.add((input.pop(), input.pop()))

        res = coins_required(s, ecoins)
        if res == 999:
            print("not possible")
        else:
            print(res)

if __name__ == "__main__":
    main()
    #cProfile.run("main()")
