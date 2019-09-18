#include <stdio.h>

int height(int heights[]) {
    int sorted[] = {[0 ... 19] = 9999};
    int steps_back = 0;

    for (int i = 0; i < 20; i++) {
        int j;
        for (j = 0; sorted[j] < heights[i] && j < 20; j++);
        for (int k = 19; k >= j; k--) {
            if (sorted[k - 1] != 9999 && k != j)
                steps_back += 1;
            sorted[k] = sorted[k - 1];
        }
        sorted[j] = heights[i];
    }

    return steps_back;
}

int main() {
    int p;
    scanf("%d", &p);

    int heights[20];
    int k;
    for (int i = 1; i < p + 1; i++) {
        scanf("%d", &k);
        for (int j = 0; j < 20; j++)
            scanf("%d", &heights[j]);
        printf("%d %d\n", k, height(heights));
    }

    return 0;
}
