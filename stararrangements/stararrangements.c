#include <stdio.h>

int main() {
    int x = 2, y = 1, s;

    scanf("%d", &s);

    printf("%d:\n", s);

    while (x + y <= s) {
        if (s % (x + y) == 0 || s % (x + y) == x)
            printf("%d,%d\n", x, y);
        if (x == y)
            x++;
        else
            y++;
    }

    return 0;
}

