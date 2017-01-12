#include <stdio.h>

int main() {
    int n, x, i;
    scanf("%d", &n); // Number of cases
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x % 2) {
            printf("%d is odd\n", x);
        } else {
            printf("%d is even\n", x);
        }
    }
    return 0;
}

