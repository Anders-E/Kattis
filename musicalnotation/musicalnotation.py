from sys import stdin

tones = {tone: [tone + ": "] for tone in "GFEDCBAgfedcba"}
has_staff = set("FDBgea")

for tone in stdin.readlines()[1].split():
    dur = 1 if len(tone) == 1 else int(tone[1])
    tone = tone[0]
    for t, row in tones.items():
        if t == tone:
            tones[t].append("*" * dur)
        else:
            tones[t].append(("-" if t in has_staff else " ") * dur)
    for t, row in tones.items():
        row.append("-" if t in has_staff else " ")

for tone in "GFEDCBAgfedcba":
    print("".join(tones[tone][:-1]))
