from sys import stdin

def get_orders(n):
    orders = {}
    for _ in range(n):
        line = stdin.readline().split()
        name = line.pop(0)
        for item in line:
            if item not in orders:
                orders[item] = [name]
            else:
                orders[item].append(name)
    return orders

def print_orders(orders):
    for key in sorted(orders.keys()):
        print(key, end="")
        for item in sorted(orders[key]):
            print(" " + item, end="")
        print()
    print()

for n in stdin:
    orders = get_orders(int(n))
    print_orders(orders)

