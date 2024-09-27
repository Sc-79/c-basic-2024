
// Area of circle
// Note:- Formula of area of circle
// Area = pi * r * r

#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, area;

    // ব্যাসার্ধ ইনপুট করুন
    printf("বৃত্তের ব্যাসার্ধ ইনপুট করুন (সেন্টিমিটার): ");
    scanf("%f", &radius);

    // বৃত্তের ক্ষেত্রফল নির্ণয়
    area = PI * radius * radius;

    // ক্ষেত্রফল প্রদর্শন
    printf("বৃত্তের ক্ষেত্রফল: %.2f বর্গ সেন্টিমিটার\n", area);

    return 0;
}

