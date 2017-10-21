#include <stdio.h>
#include <math.h>

int main() {
    int n;

    scanf("%d", &n);
    printf("%.0f\n", pow(1 + pow(2, n), 2));

    return 0;
}

