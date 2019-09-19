from sys import stdin

def toilet(prefs, policy):
    adjustments = 0
    state = prefs[0]

    for pref in prefs[1:]:
        if pref != state:
            adjustments += 1
            state = pref
        if state != policy and policy != "W":
            adjustments += 1
            state = policy
    
    return adjustments

prefs = stdin.readline().rstrip()

print(toilet(prefs, "U"))
print(toilet(prefs, "D"))
print(toilet(prefs, "W"))
