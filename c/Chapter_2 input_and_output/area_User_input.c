#include <stdio.h>

int main() {
    unsigned long long result = 2;

    for(int i = 1; i <= 64; i++) {
        result = result * result;
        printf("Step %d: Overflow likely / value too big\n", i);
    }

    return 0;
}