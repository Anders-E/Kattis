#include <stdio.h>

int sign (int x) {
    return (x > 0) - (x < 0);
}

int main() {
    int x, y;

    scanf("%d %d", &x, &y);
    x = sign(x);
    y = sign(y);
    printf("%d\n", -y + 1 + (-x * y + 3) / 2);

    return 0;
}

