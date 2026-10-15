#include <stdio.h>

void find_mirrored_multiples() {
    int a, n, rev, k;

    for (a = 1; a < 300000; a++) {
        for (n = a, rev = 0; n != 0; n /= 10) {
            k = n % 10;        
            rev = rev * 10 + k;
        }

        if (a * 4 == rev) {
            printf("Num: %d\n", a, a * 4);
        }
    }
}

int main() {
    find_mirrored_multiples();
    return 0;
}
