from sys import stdin

word = {c for c in stdin.readline().rstrip()}
guesses = list(reversed(stdin.readline().rstrip()))
guessed = set()
failed_guesses = 0

while failed_guesses < 10:
    guess = guesses.pop()
    if guess in word:
        guessed.add(guess)
    else:
        failed_guesses += 1

print("WIN" if len(word) == len(guessed) else "LOSE")
