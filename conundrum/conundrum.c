#include <stdio.h>

int main() {
    char s[301];
    int sum = 0;
    int i = 0;

    scanf("%s", s);

    while(s[i]) {
        if (s[i++] != 'P') sum++;
        if (s[i++] != 'E') sum++;
        if (s[i++] != 'R') sum++;
    }

    printf("%d", sum);

    return 0;
}

