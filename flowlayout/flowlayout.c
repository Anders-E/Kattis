#include <stdio.h>

void flow_layout(int m) {
    int max_x = 0;
    int max_y = 0;
    int curr_x = 0;
    int curr_y = 0;
    int x, y;
    
    while (scanf("%d %d", &x, &y) && (x != -1 && y != -1)) {
        if (curr_x + x > m) {
            max_y += curr_y;
            curr_x = 0;
            curr_y = 0;
        }
        curr_x += x;
        curr_y = curr_y > y ? curr_y : y;
        max_x = max_x > curr_x ? max_x : curr_x;
    }
    
    max_y += curr_y;
    
    printf("%d x %d\n", max_x, max_y);
}

int main() {
    int m;
    
    while (scanf("%d", &m) && m)
        flow_layout(m);

    return 0;
}
