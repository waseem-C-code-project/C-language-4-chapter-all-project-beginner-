#include <stdio.h>
#include <conio.h>

char main() {  // void کی جگہ int استعمال کرنا بہتر ہے
 
    char name[] = "waseem";
    char city[] = "faslabad";

    printf("%25s\n", name);
    printf("%-25s\n", city);

    // %d کو %s سے بدل دیا گیا ہے تاکہ نام اور شہر صحیح نظر آئیں
    printf("%s and %s\n", name, city);

    return 0;
}
