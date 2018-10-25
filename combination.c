/*
Date: 07.03.2018
Author: Atalay Küçükoğlu
This program calculates the combination of
given numbers
*/

#include <stdio.h>		// printf, scanf

int factorial (int n) {		// calculates the factorial
	if (n < 0) return -1;		// returns if the input is invalid

	int i=0;
	int f=1;


	for (i=2; i<=n; i++) {
		f *= i;
		};

	return f;		// returns the factorial
}

int combination (int n, int r) {		//calculates the combination

	if (n<r) return -1;		// returns if the input is invalid

	int c = factorial(n) / (factorial(r) * factorial(n-r));		// mathematical formula: n! / (r! * (n-r)!)

	return c;		// returns the combination
}

int main() {
	int n = 0, r = 0;
	printf("Enter the first number: ");
	scanf("%d", &n);		// reads the number 1 (n)
	printf("Enter the second number: ");
	scanf("%d", &r);		// reads the number 2 (r)

	int n_fact = factorial(n);		// assigns the factorial of n
	int r_fact = factorial(r);		// assigns the factorial of r
	int result = combination(n,r);	// assigns the combination [C(n,r)]
	
	
	if (n_fact == -1 || r_fact == -1) {		// checks if the user enters an invalid input
		printf("Invalid input. Please enter a positive integer.\n");		// prints the error message
		
	} else if (result == -1) {		// checks if the user enters an invalid input
	
	printf("Invalid input. First number cannot be smaller then second number.\n");
	
	} else {
		
	printf ("C(%d, %d) = %d\n",n, r, result);		//prints the result
  
	}
	
	return 0;
}











