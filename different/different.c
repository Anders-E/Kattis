#include <stdio.h>
#include <stdlib.h>

int main() {
    long x, y;
    while (scanf("%ld %ld", &x, &y) != EOF)
        printf("%ld\n", labs(x - y));
}
