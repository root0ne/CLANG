#include<stdio.h>
#include<math.h>

int main(){

    double height;
    double base;

    printf("What is the Height?:");
    scanf("%lf",&height);

    printf("\nWhat is the Base?:");
    scanf("%lf",&base);

    double Hypo = sqrt(height*height + base*base);
   // double hypotenuse = sqrt(Hypo);

   // double Hypo = pow(height,2) + pow(base,2);

    printf("The Hypotenuse is:%lf",Hypo);


}