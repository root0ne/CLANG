#include<stdio.h>
int main(){

/* In this code we will see all the Arthemetic Operators in C

+ => Addition (sum)
- => Subtraction (difference)
* => Multiplication (Multiply)
/ => Divison (divide)
% => Modulus (remainder)
++ => Increment (x++ implies that x+1)
-- => Decrement (x-- imles that x-1)
*/

int x = 10;
int y = 23;
// addition 

int z = x + y;
printf("%d\n",z);

//Subtraction

int a = y - x;
printf("%d\n",a);

// multiplication

int b = x*y;
printf("%d\n",b);

//division

float d = x / (float) y;
printf("%f\n",d);

//Increment

int e = x++;
int f = y++;
int g = e + f;

printf("%d\n",e);
printf("%d\n",f);
printf("%d\n",g);

//Decrement 

int h = x--;
int i = y--;
int j = i - h; 

printf("%d\n",h);
printf("%d\n",i);
printf("%d\n",j);

return 0;
}