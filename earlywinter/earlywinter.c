#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, dm, i, di;

    scanf("%d %d", &n, &dm);

    for (i = 0; i < n; i++) {
        scanf("%d", &di);
        if (di <= dm) {
            printf("It hadn't snowed this early in %d years!\n", i);
            return 0;
        }
    }

    printf("It had never snowed this early!\n");

    return 0;
}
