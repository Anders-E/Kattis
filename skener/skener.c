#include <stdio.h>
#include <stdlib.h>

void skener(char *s, char *ss, int c, int zr, int zc) {
    int i, j = 0;

    while (*s) {
        for (i = 0; i < zc; i++, j++)
            ss[j] = *s;
        s++;
    }
    ss[j++] = '\0';

    for (i = 0; i < zr; i++)
        printf("%s\n", ss);
}

int main() {
    int r, c, zr, zc;
    char s[51], ss[251];

    scanf("%d %d %d %d", &r, &c, &zr, &zc);

    while (r--) {
        scanf("%s", s);
        skener(s, ss, c, zr, zc);
    }

    return 0;
}

