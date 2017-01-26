#include <stdio.h>

struct Date {
    int y;
    int m;
    int d;
};

void eligible() {
    char name[31];   /* student name */
    struct Date pss; /* date of start of post-secondary studies */
    struct Date dob; /* date of birth */
    int c;           /* num of courses */

    scanf("%s", name);
    scanf("%d/%d/%d %d/%d/%d", &pss.y, &pss.m, &pss.d, &dob.y, &dob.m, &dob.d);
    scanf("%d", &c);

    if (pss.y >= 2010 || dob.y >= 1991)
        printf("%s eligible\n", name);
    else if (c >= 41)
        printf("%s ineligible\n", name);
    else
        printf("%s coach petitions\n", name);
}

int main() {
    int n;

    scanf("%d", &n);

    while (n--)
        eligible();

    return 0;
}

