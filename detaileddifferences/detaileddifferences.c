#include <stdio.h>

void get_diff(char* a, char *b, char *diff) {
    int i;
    for (i = 0; a[i] && b[i]; i++)
        diff[i] = a[i] == b[i] ? '.' : '*';
    diff[i] = '\0';
}

int main() {
    int n;
    char a[51], b[51], diff[51];

    scanf("%d", &n);

    while (n--) {
        scanf("%s %s", a, b);
        get_diff(a, b, diff);
        printf("%s\n%s\n%s\n\n", a, b, diff);
    }

    return 0;
}

