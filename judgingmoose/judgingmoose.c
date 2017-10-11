#include <stdio.h>

int main() {
    int l, r;
    scanf("%d %d", &l, &r);

    if (!l && !r)
        printf("Not a moose");
    else if (l == r)
        printf("Even %d", l + r);
    else
        printf("Odd %d", ((l > r) ? l : r) * 2);

    printf("\n");
    return 0;
}

