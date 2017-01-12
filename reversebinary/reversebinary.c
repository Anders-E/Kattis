#include <stdio.h>

/* Find leftmost bit with value 1 of number x */
int leftmost_bit(int x) {
    int i = 0;
    while(x /= 2)
        i++;
    return i;
}

/* Return value of the nth most significant bit of number x */
int is_bit(int x, int n) {
    return (x >> n) % 2; 
}

/* Set value of the nth most significant bit of number x to value y */
void set_bit(int *x, int y, int n) {
    *x = y ? *x | (1 << n) : *x & ~(1 << n);
}

/* Swap values of the nth and mth most significant bits of number x */
void swap_bit(int *x, int n, int m) {
    int tmp = is_bit(*x, n);
    set_bit(x, is_bit(*x, m), n);
    set_bit(x, tmp, m);
}

/* "Reverse" binary representation of number x */
void swap_bits(int *x, int n) {
    int i;
    for (i = 0; i <= n/2; i++)
        swap_bit(x, i, n-i);
}

int main() {
    int x, n;
    scanf("%d", &x);
    n = leftmost_bit(x);
    swap_bits(&x, n);
    printf("%d\n", x);
    return 0;
}

