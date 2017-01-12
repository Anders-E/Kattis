#include <stdio.h>

int main() {
    int n, x;
    int sum = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        if (x < 0) sum++;
    }
    printf("%d\n", sum);
    return 0;
}

