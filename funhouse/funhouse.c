#include <stdio.h>
#include <stdlib.h>

char **read_map(int W, int L) {
    char **map = malloc((L + 1) * sizeof(char*));
    for (int i = 0; i < L; i++) {
        map[i] = malloc((W + 1) * sizeof(char));
        scanf("%s\n", map[i]);
    }
    return map;
}

char print_map(char **map, int L) {
    for (int i = 0; i < L; i++)
        printf("%s\n", map[i]);
}

void find_entry(char **map, int W, int L, int *x, int *y) {
    for (*y = 0; *y < L; (*y)++)
        for (*x = 0; *x < W; (*x)++)
            if (map[*y][*x] == '*')
                return;
}

void initial_dir(int x, int y, int W, int L, int *xdir, int *ydir) {
    if (x == 0) {
        *xdir = 1; *ydir = 0;
    } else if (x == W - 1) {
        *xdir = -1; *ydir = 0;
    } else if (y == 0) {
        *xdir = 0; *ydir = 1;
    } else if (y == L - 1) {
        *xdir = 0; *ydir = -1;
    }
}

void funhouse(int i, int W, int L) {
    printf("HOUSE %d\n", i);
    char **map = read_map(W, L);
    int x, y;
    find_entry(map, W, L, &x, &y);

    int xdir, ydir;
    initial_dir(x, y, W, L, &xdir, &ydir);
    
    while (map[y += ydir][x += xdir] != 'x') {
        if (map[y][x] == '/') {
            if (xdir == 1) {
                xdir = 0; ydir = -1;
            } else if (xdir == -1) {
                xdir = 0; ydir = 1;
            } else if (ydir == 1) {
                xdir = -1; ydir = 0;
            } else if (ydir = -1) {
                xdir = 1; ydir = 0;
            }
        }
        if (map[y][x] == '\\') {
            if (xdir == 1) {
                xdir = 0; ydir = 1;
            } else if (xdir == -1) {
                xdir = 0; ydir = -1;
            } else if (ydir == 1) {
                xdir = 1; ydir = 0;
            } else if (ydir = -1) {
                xdir = -1; ydir = 0;
            }
        }
    }

    map[y][x] = '&';
    print_map(map, L);
    free(map);
}

int main() {
    int W, L;
    int i = 1;
    while (scanf("%d %d", &W, &L) && (W || L))
        funhouse(i++, W, L);

    return 0;
}
