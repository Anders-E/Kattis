#include <stdio.h>
#include <math.h>

#define G 9.81

double x_pos(float v, float theta, float t) {
    return v * t * cos(theta);
}

double y_pos(float v, float theta, float t) {
    return v * t * sin(theta) - 0.5 * G * pow(t, 2);
}

char safe(float v, float theta, float x, float bot, float top) {
    double y, t;

    t = x / (v * cos(theta));
    y = y_pos(v, theta, t);
    return (y >= bot + 1 && y <= top - 1) ? 1 : 0;
}

int main() {
    int n;
    double v, theta, x, bot, top;

    scanf("%d", &n);

    while (n--) {
        scanf("%lf %lf %lf %lf %lf", &v, &theta, &x, &bot, &top);
        theta = theta * M_PI / 180; /* convert to radians */
        printf("%s\n", safe(v, theta, x, bot, top) ? "Safe" : "Not Safe");
    }
}

