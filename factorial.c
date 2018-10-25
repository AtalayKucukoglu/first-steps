/*
Date: 07.03.2018
Author: Atalay Küçükoğlu

This program calculates the factorial of 
the input number
*/

#include <stdio.h>		// printf, scanf

int factorial (int num) {		// calculates the factorial
	int i=0;
	int f=1;
	if (num < 0) return -1; 
	
	for (i=2; i<=num ; i++) {
		f *= i;
		};
		
	return f;		// returns the result
}

int main() {
	int number = 0;
	printf("Enter the number: ");
	scanf("%d", &number);		// reads the inputs
	int result = factorial(number);		// assigns the factorial of the number
	
	if (result == -1) {		// checks if the user enters an invalid input
		printf("Invalid input. Please enter a positive integer.\n");		// prints the error message
	} else {
	
	printf ("Factorial of %d : %d\n", number, result);		//prints the result
  
	}
	return 0;
}
