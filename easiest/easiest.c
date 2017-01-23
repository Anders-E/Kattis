#include <stdio.h>

int sum_digits(int x) {
    int sum = 0;
    while (x) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int sum, n, p;

    while (scanf("%d", &n) && n != 0) {
        sum = sum_digits(n);
        p = 10;
        while (sum_digits(++p * n) != sum);
        printf("%d\n", p);
    }

    return 0;
}

