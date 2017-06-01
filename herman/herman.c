#include <stdio.h>
#include <math.h>

double eucl_radius(int r) {
    return M_PI * r * r;
}

double taxi_radius(int r) {
    return 2 * r * r;
}

int main() {
    int r;
    double taxi, eucl;

    scanf("%d", &r);

    eucl = eucl_radius(r);
    taxi = taxi_radius(r);

    printf("%lf\n%lf\n", eucl, taxi);

    return 0;
}

