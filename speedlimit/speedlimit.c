#include <stdio.h>

int calc_speed(int n) {
    int d = 0, v, t, pt = 0; /* distance, velocity, time, previous time */
    while (n--) {
        scanf("%d %d", &v, &t);
        d += v * (t - pt);
        pt = t;
    }
    return d;
}

int main() {
    int n;
    
    while (scanf("%d", &n) && n != -1)
        printf("%d miles\n", calc_speed(n));

    return 0;
}

