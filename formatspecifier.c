#include <stdio.h>
int main(){

    char name[] = "Vardhan";
    char dept [] = "BSCCS";
    char grade = 'B';
    float GPA = 7.5;
    const int age = 18;

    printf("Hi %s   ", name);
    printf("Your department is %s  ",dept);
    printf("Your grade for this semster is %c  ", grade);
    printf("Your OVERALL GPA is %f  " , GPA);
    printf("Your age is %d", age);

    return 0;

}

// This code is to understand format specifiers %d,%s,%f,%c.
/s 