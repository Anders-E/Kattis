#include <stdio.h>
#include <stdlib.h>

int* get_days_months(int *d, int *m) {
    int i;
    int *md;
    scanf("%d %d", d, m);
    md = malloc(*m * sizeof(int));
    for (i = 0; i < *m; i++)
        scanf("%d", &md[i]);
    return md;
}

void print_fridays(int m, int *md) {
    int i, j;
    int sum = 0;
    int wd = 6; // weekday (mon-sun, 0-6)

    for (i = 0; i < m; i++) {
        for (j = 1; j < md[i] + 1; j++) {
            if (j == 13 && wd == 4) // weekday 4: friday
                sum++;
            wd = (wd + 1) % 7;
        }
    }

    printf("%d\n", sum);
}

int main() {
    int t; // number of test cases
    int d, m; // days/months per year
    int *md; // days for each month

    scanf("%d", &t);

    while (t--) {
        md = get_days_months(&d, &m);
        print_fridays(m, md);
        free(md);
    }

    return 0;
}

