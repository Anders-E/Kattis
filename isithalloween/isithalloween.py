from sys import stdin

date = stdin.read().strip()
print("yup" if date == "OCT 31" or date == "DEC 25" else "nope")
