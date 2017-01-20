#include <stdio.h>

char is_vowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    int i, j;
    char s[101];
    char res[101];

    fgets(s, 101, stdin);

    for (i = 0, j = 0; s[i]; i++, j++) {
        res[j] = s[i];
        if (is_vowel(s[i]))
            i += 2;
    }
    res[j++] = '\0';

    printf("%s", res);

    return 0;
}

