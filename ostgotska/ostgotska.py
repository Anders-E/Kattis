from sys import stdin

sentence = stdin.readline().split()
count = len([word for word in sentence if "ae" in word])

print(
    "dae ae ju traeligt va"
    if count / len(sentence) >= 0.4 else 
    "haer talar vi rikssvenska"
)
