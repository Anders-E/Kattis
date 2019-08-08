from sys import stdin

n, y = map(int, stdin.readline().split())

found_obstacles = set()

for _ in range(y):
    found_obstacles.add(int(stdin.readline()))

for i in range(n):
    if i not in found_obstacles:
        print(i)

print("Mario got {} of the dangerous obstacles.".format(len(found_obstacles)))
