#include <stdio.h>

int main()
{
    // variable = Allocated space in memory to store data,
    // we refer to a variable's name to access the store value.
    // That variable now behave as if it was the value it contains.
    // but we need to declare wthat type of data we are storing

    int x;                  // declaration
    x = 1024;               // initialization
    int y = 2048;           // declaration and initialization
    int age = 25;           // integer
    float gpa = 3.5;        // float
    char grade = 'A';       // character
    char name[] = "Sourav"; // array
    //    pirnt any variable using format specifier
    printf("you are %d years old\n", age);
    printf("your gpa is %f\n", gpa);
    printf("your grade is %f\n", grade);
    printf("your name is %s\n", name);

    return 0;
}