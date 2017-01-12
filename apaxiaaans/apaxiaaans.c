#include <stdio.h>

int main() {
    char s[251];
    int i = 0;
    scanf("%s", s);
    while (s[i++] != '\0')
        if (s[i] != s[i - 1])
            printf("%c", s[i - 1]);
    printf("\n");
    return 0;
}

