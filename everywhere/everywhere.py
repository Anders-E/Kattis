from sys import stdin

visited = {}
num_trips = int(stdin.readline())

for _ in range(num_trips):
    num_cities = int(stdin.readline())
    unique = 0
    for _ in range(num_cities):
        city = stdin.readline()
        if city not in visited:
            visited[city] = True
            unique += 1
    print(unique)

