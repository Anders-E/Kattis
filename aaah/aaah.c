#include <stdio.h>

int aaah_count(char *aaah) {
    int sum = 0;

    while (*aaah != 'h') {
        sum++;
        aaah++;
    }

    return sum;
}

int main() {
    char aaah[1001];
    int n;

    scanf("%s", aaah);
    n = aaah_count(aaah);
    scanf("%s", aaah);
    printf("%s\n", n < aaah_count(aaah) ? "no" : "go");

    return 0;
}
