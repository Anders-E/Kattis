#include <stdio.h>

int suit_shift(int* count, char suit, int n) {
    switch (suit) {
    case 'P':
        count[0] -= 1;
        return n;
    case 'K':
        count[1] -= 1;
        return n + 13;
    case 'H':
        count[2] -= 1;
        return n + 26;
    case 'T':
        count[3] -= 1;
        return n + 39;
    }
}

int main() {
    int cards[52] = {0};
    int count[4] = {13, 13, 13, 13};
    int n;
    char suit;

    while (scanf("%c%d", &suit, &n) != EOF && suit != '\n') {
        n = suit_shift(count, suit, n);
        if (cards[n-1]) {
            printf("GRESKA\n");
            return 0;
        } else {
            cards[n-1] = 1;
        }
    }

    printf("%d %d %d %d\n", count[0], count[1], count[2], count[3]);

    return 0;
}

