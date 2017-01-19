#include <stdio.h>

int main() {
    int L, n;
    double C, w, l, sum = 0.0;

    scanf("%lf %d", &C, &L);

    while (L--) {
        scanf("%lf %lf", &w, &l);
        sum += w * l;
    }

    printf("%lf\n", sum * C);

    return 0;
}

