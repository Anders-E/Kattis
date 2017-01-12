#include <stdio.h>
#include <stdlib.h>

int* read_trees(int n) {
    int i;
    int *trees = malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        scanf("%d", &trees[i]);
    return trees;
}

int decr(const void *p, const void *q) {
    return (*(int*) q - *(int*) p);
}

int main() {
    int n, i, time = 0;
    int *trees;

    scanf("%d", &n);
    trees = read_trees(n);
    qsort(trees, n, sizeof(int), decr);

    for (i = 0; i < n; i++)
        time = (trees[i] + i > time) ? trees[i] + i : time;

    free(trees);
    printf("%d\n", time + 2);

    return 0;
}

