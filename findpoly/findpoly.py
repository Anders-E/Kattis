from sys import stdin
from collections import defaultdict
import re

def read_input():
    pattern = re.compile(r"\((\d+),(\d+)\),\((\d+),(\d+)\)")
    segments = stdin.read().replace("\n", "").split(";")[:-1]
    edges = defaultdict(set)
    for segment in segments:
        x1, y1, x2, y2 = pattern.match(segment).groups()
        a = (x1, y1)
        b = (x2, y2)
        edges[a].add(b)
        edges[b].add(a)
    return edges

def dfs(edges):
    visited = set()
    components = 0
    polygons = 0
    for node in edges.keys():
        if node in visited:
            continue
        is_polygon = True
        components += 1
        q = list(edges[node])
        current = node
        while q:
            if len(edges[current]) != 2:
                is_polygon = False
            current = q.pop()
            visited.add(current)
            q.extend(edges[current] - visited)
        if is_polygon:
            polygons += 1
    return "{} {}".format(components, polygons)

edges = read_input()
print(dfs(edges))
