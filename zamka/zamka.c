#include <stdio.h>

int digit_sum(int x) {
    int sum = 0;

    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    
    return sum;
}

int main() {
    int l, d, x, n, m;

    scanf("%d %d %d", &l, &d, &x);

    for (n = l; n <= d && digit_sum(n) != x; n++);
    for (m = d; m >= l && digit_sum(m) != x; m--);

    printf("%d\n%d\n", n, m);

    return 0;
}

