#include <stdio.h>

int lower_bound() {
    int n, prev = 0, lb = 0;

    scanf("%d", &prev);
    while(scanf("%d", &n) && n) {
        if (n > prev * 2)
            lb += n - prev * 2;
        prev = n;
    }

    return lb;
}

int main() {
    int t;

    scanf("%d", &t);
    
    while (t--)
        printf("%d\n", lower_bound());

    return 0;
}
