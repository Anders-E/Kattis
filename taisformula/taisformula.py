from sys import stdin

n = int(stdin.readline())

datapoints = [
    list(map(float, point)) for point in map(str.split, stdin.readlines())
]

sum = 0
for i in range(n - 1):
    t1, v1 = datapoints[i]
    t2, v2 = datapoints[i + 1]
    sum += (v1 + v2) / 2 * (t2 - t1)

print(sum / 1000)
