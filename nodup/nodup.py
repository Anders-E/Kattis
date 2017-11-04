from sys import stdin

words = set()
for word in stdin.readline().split():
    if word in words:
        print("no")
        exit()
    words.add(word)
print("yes")

