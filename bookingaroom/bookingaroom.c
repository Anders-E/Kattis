#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, n, rn;
    char *rooms;

    scanf("%d %d", &r, &n);

    if (n >= r) {
        printf("too late\n");
        return 0;
    }

    rooms = calloc(r, sizeof(char));

    while (n--) {
        scanf("%d", &rn);
        rooms[rn - 1] = 1;
    }

    rn = 1;
    while (rooms[rn - 1])
        rn++;

    free(rooms);
    printf("%d\n", rn);

    return 0;
}

