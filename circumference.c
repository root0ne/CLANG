#include<stdio.h>
#include<math.h>
int main(){

    const double pi = 3.14;
    double radius;

    printf("What is the radius of Circle ?:",radius);
    scanf("%lf", &radius );

    double circumference = 2*pi*radius;
    double area = pi*radius*radius;

    printf("\nThis is the circumference of: %lf",circumference);
    printf("\nThis is the area of the Circle: %lf" ,area);

    return 0;

    
}