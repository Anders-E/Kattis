#include <stdio.h>

#define MAX_VALUE 1000000
#define MIN_VALUE -1000000

void stats(int n) {
    int tmp, max = MIN_VALUE, min = MAX_VALUE;
    while (n--) {
        scanf("%d", &tmp);
        max = (tmp > max) ? tmp : max;
        min = (tmp < min) ? tmp : min;
    }

    printf("%d %d %d\n", min, max, max - min);
}

int main() {
    int n, c = 1;

    while (scanf("%d", &n) != EOF) {
        printf("Case %d: ", c++);
        stats(n);
    }

    return 0;
}

