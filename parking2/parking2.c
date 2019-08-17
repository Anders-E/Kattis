#include <stdio.h>

int min_shop(int n, int shops[]) {
    int i, min;
    min = 100;
    for (i = 0; i < n; i++)
        if (shops[i] < min)
            min = shops[i];
    return min;
}

int max_shop(int n, int shops[]) {
    int i, max;
    max = 0;
    for (i = 0; i < n; i++)
        if (shops[i] > max)
            max = shops[i];
    return max;
}

int parking() {
    int n, i, min, max, *shops;

    scanf("%d", &n);
    shops = malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        scanf("%d", &shops[i]);
    min = min_shop(n, shops);
    max = max_shop(n, shops);
    free(shops);

    return 2 * -min + 2 * max;
}

int main() {
    int t;

    scanf("%d", &t);
    while (t--)
        printf("%d\n", parking());

    return 0;
}
