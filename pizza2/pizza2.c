#include <stdio.h>
#include <math.h>

double circle_area(double r) {
    return M_PI * r * r;
}

int main() {
    int r, c;
    double a, b;

    scanf("%d %d", &r, &c);

    a = circle_area(r);
    b = circle_area(r - c);

    printf("%lf\n", b / a * 100);

    return 0;
}
