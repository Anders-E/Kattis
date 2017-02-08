#include <stdio.h>

int unique(int x, int y, int z) {
    if (x != y && x != z)
        return x;
    if (y != x && y != z)
        return y;
    return z;
}

int main() {
    int a1, a2, b1, b2, c1, c2, d1, d2;

    scanf("%d %d %d %d %d %d", &a1, &a2, &b1, &b2, &c1, &c2);

    d1 = unique(a1, b1, c1);
    d2 = unique(a2, b2, c2);

    printf("%d %d\n", d1, d2);

    return 0;
}
