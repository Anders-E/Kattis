from sys import stdin

def decode(s):
    decoded = []
    for i in range(1, len(s), 2):
        decoded.append(s[i - 1] * int(s[i]))
    return "".join(decoded)

def encode(s):
    encoded = []
    i = 0
    while i < len(s):
        mul = 1
        j = i + 1
        while j < len(s) and s[i] == s[j]:
            mul += 1
            j += 1
        encoded.append(s[i])
        encoded.append(str(mul))
        i = j
    return "".join(encoded)

enc_dec, s = stdin.read().split()
print(decode(s) if enc_dec == "D" else encode(s))
