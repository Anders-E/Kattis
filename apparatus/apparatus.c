#include <stdlib.h>
#include <stdio.h>

void read_photos(int **p, int n, int m) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {

        }
    }
}

int main() {
    int n;   // Number of switches/lights on the apparatus
    int m;   // Number of photos of the apparatus
    int **p; // Photo matrix
    int i;

    // Read n and m from stdin
    scanf("%d %d", &n, &m);
    
    // Allocate memory for photo matrix (p)
    p = malloc(m * sizeof *p);
    for (i = 0; i < n; i++)
        p[i] = malloc(n * sizeof *p[i]);

    read_photos(p, n, m);

    return 0;
}

