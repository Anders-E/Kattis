#include <stdio.h>
#include <stdlib.h>

int coast_search(char *map, int n, int m, int i, int j, int len) {
    int offset = i * m + j;

    /* if visited ('2') */
    if (map[offset] == '2')
        return len;

    /* if land ('1') */
    if (map[offset] == '1')
        return len + 1;

    /* set as visited ('2') */
    map[offset] = '2';

    /* if coast */
    if (i > 0)     /* north */
        len = coast_search(map, n, m, i - 1, j, len);
    if (i < n - 1) /* south */
        len = coast_search(map, n, m, i + 1, j, len);
    if (j > 0)     /* west */
        len = coast_search(map, n, m, i, j - 1, len);
    if (j < m - 1) /* east */
        len = coast_search(map, n, m, i, j + 1, len);

    return len;
}

int coast_length(char *map, int n, int m) {
    int i, j, len = 0;

    /* Visit all borders going clockwise */
    for (i = 0, j = 0; j < m; j++) /* north side */
        len = coast_search(map, n, m, i, j, len);
    for (j = m - 1; i < n; i++)    /* east side */
        len = coast_search(map, n, m, i, j, len);
    for (i = n - 1; j >= 0; j--)   /* south side */
        len = coast_search(map, n, m, i, j, len);
    for (j = 0; i >= 0; i--)       /* west side */
        len = coast_search(map, n, m, i, j, len);

    return len;
}

int main() {
    int n, m, i;
    char *map;

    scanf("%d %d", &n, &m);

    map = malloc(n * m * sizeof(char) + 1); /* + 1 for the last null byte */

    for (i = 0; i < n * m; i += m)
        scanf("%s", &map[i]);

    printf("%d\n", coast_length(map, n, m));

    free(map);

    return 0;
}

