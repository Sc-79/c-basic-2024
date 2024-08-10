#include <stdio.h>
#include <stdbool.h>

int main(){
    // format specifiers % = defines and formats a type of data to be displayed
    // %c = character
    // %s = string (array of characters)
    // %d = integer
    // %f = float
    // %lf = double
    // %.1 = float with 1 decimal
    // %1 = minimum 1 character
    // %- = left Align





    char a = 'a';   // single character %c
    char p[] = "Sourav"; // array of characters %s
    int b = 10;     // integer %d
    float c = 10.5; // float %f
    bool e = true;  // boolean %d
    float d = 3.141592 ; // float %f 
// character printing %C format specifier using
printf("%c\n",a);
printf("%s\n",p);
printf("%f\n",c);
printf("%d\n",d);
printf("%lf\n",c);
/////////////////////////////
float item1 = 5.75;
float item2 = 10.00;
float item3 = 100.99;
printf("Item 1: $%.2f\n", item1);
printf("Item 2: $ %.2f", item2);
printf("Item 3: $%.2f", item3);
// minimum field width
printf("Item 1: $%8.2f\n", item1);
printf("Item 2: $%-8.2f", item2);
printf("Item 3: $%7.2f", item3);

//   ans = 5.75
//   ans = 10.00
//   ans = 100.99
//  

}