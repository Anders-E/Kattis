#include <stdio.h>

int main() {
    int i, d1, d2;
    scanf("%d %d", &d1, &d2);
    for (i = (d1 > d2) ? d2+1 : d1+1; i <= ((d1 > d2) ? d1+1 : d2+1); i++)
        printf("%d\n", i);
    return 0;
}

