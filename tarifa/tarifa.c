#include <stdio.h>

int main() {
    int n, p, x;
    int sum = 0;

    scanf("%d %d", &x, &n);

    while (n--) {
        scanf("%d", &p);
        sum += x - p;
    }

    printf("%d\n", sum + x);

    return 0;
}

