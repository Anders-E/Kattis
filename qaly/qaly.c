#include <stdio.h>

int main() {
    int n;
    double q, y, qaly;

    scanf("%d", &n);
    qaly = 0;

    while (n--) {
        scanf("%lf %lf", &q, &y);
        qaly += q * y;
    }

    printf("%lf\n", qaly);

    return 0;
}
