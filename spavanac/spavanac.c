#include <stdio.h>

int mod(int x, int y) {
    return (x >= 0) ? x % y : x % y + y;
}

int main() {
    int h, m; // hours, minutes
    scanf("%d %d", &h, &m);
    m -= 45;
    if (m > 0)
        printf("%d %d\n", h, m);
    else
        printf("%d %d\n", mod(h - 1, 24), 60 + m);
    return 0;
}

