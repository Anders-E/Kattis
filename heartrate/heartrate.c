#include <stdio.h>

void heartrate(int b, double p) {
    double t, t_max, t_min;

    t = b / p;
    t_max = t - (t / b);
    t_min = t + (t / b);
    printf("%.4lf %.4lf %.4lf\n", t_max * 60, t * 60, t_min * 60);
}

int main() {
    int n, b;
    double p;
    
    scanf("%d", &n);
    while (n--) {
        scanf("%d %lf", &b, &p);
        heartrate(b, p);
    }

    return 0;
}
