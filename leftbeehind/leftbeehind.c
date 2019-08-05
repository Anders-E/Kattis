#include <stdio.h>

char *beehind(int x, int y) {
    if (x + y == 13)
        return "Never speak again.";
    if (x < y)
        return "Left beehind.";
    if (x > y)
        return "To the convention.";
    return "Undecided.";
}

int main() {
    int x, y;

    while (scanf("%d %d", &x, &y) && (x || y))
        printf("%s\n", beehind(x, y));

    return 0;
}
