from sys import stdin

def out_of_bounds(y, x):
    return not (0 <= y < 5 and 0 <= x < 5)

def get_moves(y, x):
    return [
        (y + 2, x + 1),
        (y + 2, x - 1),
        (y - 2, x + 1),
        (y - 2, x - 1),
        (y + 1, x + 2),
        (y + 1, x - 2),
        (y - 1, x + 2),
        (y - 1, x - 2)
    ]

def valid_position(y, x):
    return all(
        out_of_bounds(new_y, new_x) or board[new_y][new_x] != 'k' for new_y, new_x in get_moves(y, x)
    )

board = [list(row) for row in stdin.read().splitlines()]
knights = 0

for y in range(5):
    for x in range(5):
        if board[y][x] == "k":
            knights += 1
            if not valid_position(y, x):
                print("invalid")
                exit()

print("valid" if knights == 9 else "invalid")
