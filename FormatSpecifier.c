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
    // %1 = minimun 1 character
    // %- = left Align





    char a = 'a';   // single character %c
    char p[] = "Sourav"; // array of characters %s
    int b = 10;     // integer %d
    float c = 10.5; // float %f
    bool e = true;  // boolean %d
    float d = 3.141592 ; // float %f 
// character printing %C fromat specifier using
printf("%c\n",a);
printf("%s\n",p);
printf("%f\n",c);
printf("%d\n",d);
printf("%lf\n",c);

  
  

}