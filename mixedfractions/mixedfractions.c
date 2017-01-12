#include <stdio.h>

int main() {
    int n, d; // numerator, denominator
    while (scanf("%d %d", &n, &d)) {
        if (n == 0 && d == 0) return 0;
        printf("%d %d / %d\n", n / d, n % d, d);
    }
    return 1;
}

