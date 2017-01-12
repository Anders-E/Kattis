#include <stdio.h>

int main() {
    int P, i, k, p, q;
    scanf("%d", &P);
    for (i = 0; i < P; i++) {
        scanf("%d %d/%d", &k, &p, &q);
        printf("%d %d/%d", k);
    }
}

