#include <stdio.h>

int main() {
    int ga1, gb1, ga2, gb2, ea1, eb1, ea2, eb2;
    int g, e;

    scanf("%d %d %d %d", &ga1, &gb1, &ga2, &gb2);
    scanf("%d %d %d %d", &ea1, &eb1, &ea2, &eb2);

    g = ga1 + gb1 + ga2 + gb2;
    e = ea1 + eb1 + ea2 + eb2;

    if (g > e)
        printf("Gunnar\n");
    else if (e > g)
        printf("Emma\n");
    else
        printf("Tie\n");

    return 0;
}

