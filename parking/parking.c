#include <stdio.h>

void mark_minutes(int minutes[], int arr, int dep) {
    int i;
    for (i = arr; i < dep; i++)
        minutes[i] += 1;
}

int main() {
    int a, b, c, arr1, dep1, arr2, dep2, arr3, dep3, i, cost;
    int minutes[100] = {0};

    scanf(
        "%d %d %d %d %d %d %d %d %d",
        &a, &b, &c, &arr1, &dep1, &arr2, &dep2, &arr3, &dep3
    );

    mark_minutes(minutes, arr1, dep1);
    mark_minutes(minutes, arr2, dep2);
    mark_minutes(minutes, arr3, dep3);

    cost = 0;
    for (i = 1; i <= 101; i++) {
        if (minutes[i] == 1)
            cost += a;
        else if (minutes[i] == 2)
            cost += b * 2;
        else if (minutes[i] == 3)
            cost += c * 3;
    }

    printf("%d\n", cost);

    return 0;
}
