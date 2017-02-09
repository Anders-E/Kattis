#include <stdio.h>

int main() {
    int a1, a2, b1, b2, c1, c2;

    scanf("%d %d %d %d %d %d", &a1, &a2, &b1, &b2, &c1, &c2);
    printf("%d %d\n", a1 ^ b1 ^ c1, a2 ^ b2 ^ c2);

    return 0;
}
