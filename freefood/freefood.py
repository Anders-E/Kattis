from sys import stdin

free_food_days = set()

n = int(stdin.readline())
for _ in range(n):
    s, t = map(int, stdin.readline().split())
    for i in range(s, t + 1):
        free_food_days.add(i)

print(len(free_food_days))
