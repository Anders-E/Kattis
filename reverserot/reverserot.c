#include <stdio.h>

static char ALPHA[28] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";

void rev(char *s) {
    int i = 0;
    char tmp, *end = s;

    while (*end)
        end++;
    end--;

    while (s < end) {
        tmp = *s;
        *s++ = *end;
        *end-- = tmp;
    }
}

void rot(char *s, int n) {
    while (*s)
        continue;
}

int main() {
    int n, s_size;
    char s[41];

    while (scanf("%d ", &n) && n != 0) {
        scanf("%s", s);
        rev(s);
        rot(s, n);
        printf("%s\n", s);
    }
}
