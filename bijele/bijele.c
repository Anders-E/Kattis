#include <stdio.h>

int main() {
    int x, i;
    int pieces[6] = {1, 1, 2, 2, 2, 8};
    for (i = 0; i < 6; i++) {
        scanf("%d", &x);
        printf("%d ", pieces[i] - x);
    }
    printf("\n");
    return 0;
}

