#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pot() {
    char s[5];
    scanf("%s", s);
    return pow(atoi(s) / 10, atoi(s) % 10);
}

int main() {
    int n, sum = 0;
    
    scanf("%d", &n);

    while (n--)
        sum += pot();

    printf("%d\n", sum);

    return 0;
}

