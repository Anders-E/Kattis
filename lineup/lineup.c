#include <stdio.h>
#include <string.h>

int main() {
    int n, tmp, o = 0;
    char a[13];
    char b[13];

    scanf("%d", &n);
    scanf("%s", a);
    n--;

    while (n--) {
        strcpy(b, a);
        scanf("%s", a);
        tmp = o;
        o = strcmp(a, b);
        if ((tmp < 0 && o > 0) || (tmp > 0 && o < 0)) {
            printf("NEITHER\n");
            return 0;
        }
    }

    if (!o)
        printf("NEITHER\n");
    else if (o < 0)
        printf("DECREASING\n");
    else
        printf("INCREASING\n");

    return 0;
}

