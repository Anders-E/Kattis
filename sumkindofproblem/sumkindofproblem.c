#include <stdio.h>

void sumkindofproblem() {
    int k, n, s1, s2, s3;

    scanf("%d %d", &k, &n);

    s1 = n * (n + 1) / 2;
    s2 = n * n;
    s3 = n * n + n;

    printf("%d %d %d %d\n", k, s1, s2, s3);
}

int main() {
    int p;

    scanf("%d", &p);
    while (p--)
        sumkindofproblem();

    return 0;
}
