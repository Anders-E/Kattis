#include <stdio.h>
#include <stdlib.h>

void mirror(int n) {
    int r, c, i;
    char *m;

    scanf("%d %d", &r, &c);
    m = malloc(r * c + 1);

    for (i = 0; i < r * c; i += c)
        scanf("%s", &m[i]);

    printf("Test %d", n);
    for (i = r * c; i >= 0; i--) {
        printf("%c", m[i]);
        if (i % c == 0)
            printf("\n");
    }

    free(m);
}

int main() {
    int t, i;

    scanf("%d", &t);

    for (i = 1; i < t + 1; i++)
        mirror(i);

    return 0;
}
