#include <stdio.h>
#include <math.h>

int main() {
    int t, n;

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        printf("%d\n", (int) ceil(n / 400.0));
    }

    return 0;
}

