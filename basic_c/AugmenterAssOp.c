#include <stdio.h>

// সি প্রোগ্রামিং ভাষায় অগমেন্টেড অপারেটরগুলি (অথবা সংক্ষেপে অরেথমেটিক অ্যাসাইনমেন্ট অপারেটর) এমন অপারেটর যা একটি ভেরিয়েবলের মানকে একটি নির্দিষ্ট মান দিয়ে পরিবর্তিত করে এবং সেই পরিবর্তিত মানটি আবার সেই ভেরিয়েবলে অ্যাসাইন করে। এগুলি মূলত কিছু অপারেশনকে সহজতর করতে ব্যবহার করা হয়।
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