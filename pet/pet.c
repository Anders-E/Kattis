#include <stdio.h>

int sum(int *arr, int len) {
    int s = 0;
    while (len-- > 0)
        s += arr[len];
    return s;
}

int main() {
    int i, p, win, top = 0;
    int s[4];

    for (i = 0; i < 5; i++) {
        scanf("%d %d %d %d", &s[0], &s[1], &s[2], &s[3]);
        if ((p = sum(s, 4)) > top) {
            top = p;
            win = i + 1;
        }
    }

    printf("%d %d\n", win, top);

    return 0;
}

