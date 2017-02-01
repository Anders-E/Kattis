#include <stdio.h>

int MAX(int x, int y) {
    return x > y ? x : y;
}

int MIN(int x, int y) {
    return x < y ? x : y;
}

void ants() {
    int L, n, x, min, max;
    scanf("%d", &L); // Length of pole
    scanf("%d", &n); // Number of ants
    min = 0;
    max = 0;
    while (n--) {
        scanf("%d", &x);
        min = MAX(min, MIN(x, L - x));
        max = MAX(max, MAX(x, L - x));
    }
    printf("%d %d\n", min, max);
}

int main() {
    int n;
    scanf("%d", &n); // Number of cases
    while (n--)
        ants();
    return 0;
}

