#include <stdio.h>

void recur2(int n);

int main(void) { recur2(10); }

void recur2(int n) {
    if (n > 0) {
        recur2(n - 2);
        printf("%d\n", n);
        recur2(n - 1);
    }
}