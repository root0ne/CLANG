// C program to illustrate the %d in scanf() 
#include <stdio.h> 

int main() 
{ 

	int num1, num2; 

	// Print a string 
	printf("Enter first number: "); 
	// Taking input from user and 
	// stored in num1 
	scanf("%d", &num1); 

	// Print a string 
	printf("Enter second number: "); 
	// Taking input from user and 
	// stored in num1 
	scanf("%d", &num2); 

	// Print sum of num1 and num2 
	printf("num1 + num2 = %d", num1 + num2); 

	return 0; 
}
