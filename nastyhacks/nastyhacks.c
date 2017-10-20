#include <stdio.h>

int main() {
    int n, r, e, c;

    scanf("%d", &n);

    while (n--) {
       scanf("%d %d %d", &r, &e, &c); 
       if (r < e - c)
           printf("advertise\n");
       else if (r > e - c)
           printf("do not advertise\n");
       else
           printf("does not matter\n");
    }

    return 0;
}

