#include <stdio.h>

const char *weekdays[7] = {
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday"
};

const int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int sum_days(int month) {
    int i;
    int days = 0;
    for (i = 0; i < month; i++)
        days += days_in_month[i];
    return days;
}

int main() {
    int d, m, days, weekday;

    scanf("%d %d", &d, &m);
    days = sum_days(m - 1) + d;
    weekday = (days + 2) % 7; /* +2 since 2009 starts with Thursday */

    printf("%s\n", weekdays[weekday]);

    return 0;
}

