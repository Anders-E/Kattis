#include <stdio.h>

void swap(char *cups, char a, char b) {
    char tmp = cups[b];
    cups[b] = cups[a];
    cups[a] = tmp;
}

void move(char *cups, char c) {
    switch (c) {
    case 'A':
        swap(cups, 0, 1);
        break;
    case 'B':
        swap(cups, 1, 2);
        break;
    case 'C':
        swap(cups, 0, 2);
        break;
    }
}

int main() {
    char s[51];
    char cups[3] = {1, 0, 0};
    int i;

    scanf("%s", s);

    for (i = 0; s[i]; i++)
        move(cups, s[i]);

    i = 0;
    while (!cups[i++]);

    printf("%d\n", i);

    return 0;
}

