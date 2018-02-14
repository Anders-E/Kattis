#include <stdio.h>

int main() {
    int n, p, q;
    scanf("%d %d %d", &n, &p, &q);
    printf("%s\n", ((p + q) / n) % 2 == 0 ? "paul" : "opponent");
    return 0;
}

