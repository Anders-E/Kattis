#include <stdio.h>
#include <math.h>

/* This code is unreadable, you have been warned*/

int min(int x, int y) {
    return x <= y ? x : y;
}

int signum(int x, int y) {
    return x > y ? 1 : x == y ? 0 : -1;
}

void count_cards(int *c, char *s) {
    while (*s)
        c[signum(*s++, 'G') + 1]++;
}

void calc_pts(int *c, int *p) {
    int i = 3;
    while (i--)
        *p += pow(c[i], 2);
    *p += min(c[0], min(c[1], c[2])) * 7;
}

int main() {
    int p = 0; // points
    int c[3] = {0, 0, 0};
    char s[51];

    scanf("%s", s);
    count_cards(c, s);
    calc_pts(c, &p);
    printf("%d\n", p);

    return 0;
}

