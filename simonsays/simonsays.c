#include <stdio.h>

int main() {
    int n;
    int i;
    int j;
    char s[101];
    char *ss = "Simon says";
    scanf("%d", &n);
    fgets(s, 101, stdin); // Eat newline
    for (i = 0; i < n; i++) {
        fgets(s, 101, stdin);
        j = 0;
        while (j < 10 && s[j] == ss[j])
            j++;
        while (s[j] && j > 9) {
            printf("%c", s[j]);
            j++;
        }
    }
    return 0;
}

