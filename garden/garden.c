#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double distance_to_origin(double x1, double y1, double x2, double y2) {
    return fabs(x2 * y1 - y2 * x1) / sqrt(pow(y2 - y1, 2.0) + pow(x2 - x1, 2.0));
}

double lawn_area(int R, int x1, int y1, int x2, int y2) {
    double c, d, S, theta;

    d = distance_to_origin(x1, y1, x2, y2);
    S = M_PI * pow(R, 2.0);

    if (d > R)
        return S;

    c = (pow(R, 2) - pow(d, 2.0)) * 2.0;
    theta = 2 * acos(d / R);

    return S - pow(R, 2.0) / 2.0 * (theta - sin(theta));
}

int main() {
    int L, x1, y1, x2, y2, R;

    scanf("%d %d %d %d %d", &L, &x1, &y1, &x2, &y2);

    R = 1;
    while (lawn_area(R, x1, y1, x2, y2) < L)
        R++;

    printf("%d\n", R);

    return 0;
}
