#include <stdio.h>
#include <math.h>

int main() {
    int h, v, len;
    double rad;

    scanf("%d %d", &h, &v);

    rad = v * M_PI / 180;
    len = (int) ceil(h / sin(rad));
    printf("%d\n", len);

    return 0;
}

