#include <stdio.h>
#include <math.h>

double cyl_vol(double r, double h) {
    return M_PI * pow(r, 2.0) * h;
}

double cone_vol(double r, double h) {
    return cyl_vol(r, h) / 3.0;
}

double beavergnaw(double D, double V) {
    double cyl = cyl_vol(D / 2.0, D);
    double cone = cone_vol(D / 2.0, D / 2.0);
    double C = cyl - cone * 2.0;
    return cbrt(6 / M_PI * (C - V));
}

int main() {
    int D, V;

    while (scanf("%d %d", &D, &V) && D && V)
        printf("%.9f\n", beavergnaw(D, V));

    return 0;
}
