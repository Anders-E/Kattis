#include <stdio.h>

int main() {
    int i, x, sum = 0;
    int dist[41] = {0}; // distinct values
    for (i = 0; i < 10; i++) {
        scanf("%d", &x);
        if (!dist[x % 42]) {
            sum++;
            dist[x % 42] = 1;
        }
    }
    printf("%d\n", sum);
    return 0;
}

