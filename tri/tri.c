#include <stdio.h>

int main() {
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    if (x == y + z)
        printf("%d=%d+%d\n", x, y, z);
    else if (x == y - z)
        printf("%d=%d-%d\n", x, y, z);
    else if (x == y * z)
        printf("%d=%d*%d\n", x, y, z);
    else if (x == y / z)
        printf("%d=%d/%d\n", x, y, z);
    else if (x + y == z)
        printf("%d+%d=%d\n", x, y, z);
    else if (x - y == z)
        printf("%d-%d=%d\n", x, y, z);
    else if (x * y == z)
        printf("%d*%d=%d\n", x, y, z);
    else if (x / y == z)
        printf("%d/%d=%d\n", x, y, z);

    return 0;
}

