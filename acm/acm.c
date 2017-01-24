#include <stdio.h>
#include <string.h>

int main() {
    int m, t = 0, solv = 0;
    char prob;
    char res[6];
    char failed[256] = {0};

    while (scanf("%d", &m) && m != -1) {
        scanf(" %c %s", &prob, res);

        if (res[0] == 'r') {
            t += m + failed[prob] * 20;
            solv++;
        } else {
            failed[prob]++;
        }

    }
    printf("%d %d\n", solv, t);
}

