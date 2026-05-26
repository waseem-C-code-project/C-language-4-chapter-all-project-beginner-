/*
syntex:
if (condition) {
    // code to be executed if condition is true
} else {
    // code to be executed if condition is false
}

*/


#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 40) {
        printf("passed\n");
    }
    else{
    
    printf("failed\n");
    }  
    return 0;
}