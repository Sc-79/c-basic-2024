#include <stdio.h>

int main(){
    //  augumented assignment operator = used to replace a statement where an operator takes a variable as one of its arguments and then assigns the result back to the same variable 
        int x = 10;
        x = x + 1;
        x += 1;
        printf("x = %d\n", x);
        // ans = 12

        x = x - 1;
         x -= 1;
        printf("x1 = %d\n", x);
        // ans = 10

        x = x * 1;
        x *= 1;
        printf("x2 = %d\n", x);
// ans = 10
        x = x / 1;
        x /= 1;
        printf("x3 = %d\n", x);
}