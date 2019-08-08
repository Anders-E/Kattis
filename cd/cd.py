from sys import stdin

def cd():
    collection = set()
    n = nums.pop()
    m = nums.pop()
    if (n == 0 and m == 0):
        return -1

    s = 0
    for _ in range(n):
        collection.add(nums.pop())
    for _ in range(m):
        if nums.pop() in collection:
            s += 1
    
    return s

nums = list(map(int, reversed(stdin.read().split())))

res = cd()
while (res != -1):
    print(res)
    res = cd()
