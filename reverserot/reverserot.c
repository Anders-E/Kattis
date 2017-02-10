#include <stdio.h>

#define ALPHA_OFFSET 65

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

void convert_to(char *c) {
    *c = (*c == '_')  ? '['  : *c;
    *c = (*c == '.')  ? '\\' : *c;
}

void convert_from(char *c) {
    *c = (*c == '[')  ? '_'  : *c;
    *c = (*c == '\\') ? '.'  : *c;
}

void rot(char *s, int n) {
    while (*s) {
        convert_to(s);
        *s -= ALPHA_OFFSET;
        *s = (*s + n) % 28;
        *s += ALPHA_OFFSET;
        convert_from(s);
        s++;
    }
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
