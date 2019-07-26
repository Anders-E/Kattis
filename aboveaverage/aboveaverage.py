from sys import stdin

lines = [list(map(int, line.split())) for line in stdin.readlines()]
avgs = []

for line in lines[1:]:
    avgs.append(sum(line[1:]) / len(line[1:]))

for i, line in enumerate(lines[1:]):
    above_avg = sum([grade > avgs[i] for grade in line[1:]])
    percentage = above_avg / len(line[1:]) * 100
    print("{0:.3f}%".format(percentage))
