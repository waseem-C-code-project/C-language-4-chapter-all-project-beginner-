#include <stdio.h>

int main() {
    int a , b , c , d,e;

    a = 10;
    b = 20;
    c = 10;
    d = 10;
    e = 10;

    printf("a += %d\n", a += 10);   // 20
    printf("b -= %d\n", b -= 10);   // 10
    printf("c *= %d\n", c *= 10);
    printf("c /= %d\n", d /= 10);
    printf("c %= %d\n", e %= 10);
    

    return 0;
}