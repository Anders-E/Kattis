from sys import stdin
import mappings

def get_digits():
    rows = []
    for row in stdin:
        rows.append(row)
    n = len(rows[0]) // 6
    digits = [""] * n
    for row in rows:
        for i in range(0, len(row), 6):
            digits[i // 6] += row[i:i+5] + "\n"
    return digits

def split_digits(digits):
    digit_string = ""
    for digit in digits:
        digit_string += str(mappings.to_int[digit.strip()])
    return digit_string

def sum_digits(digit_string):
    return str(sum(map(int, digit_string.split("+"))))

def print_digits(s):
    out = "";
    for i in range(7):
        for digit in s:
            out += mappings.to_ascii[int(digit)][i*6:i*6+5] + "."
        out = out[:-1]
        out += "\n"
    print(out)

digits = get_digits()
digit_string = split_digits(digits)
s = sum_digits(digit_string)
print_digits(s)

