#include <stdio.h>
/*
Input two number. Perform addition, subtraction, division and multiplication on it.
*/

int first_number;
int second_number;
float output_number;


int main (void) {
	printf("Input first integer\n");
	scanf("%d",&first_number);
	printf("Input second integer\n");
	scanf("%d",&second_number);
	printf("First number: %d\n", first_number);
	printf("Second number: %d\n", second_number);
	output_number=first_number+second_number;
	printf("Sum of the two number is: %f\n", output_number);
	output_number=first_number-second_number;
	printf("Difference of the two number is: %f\n", output_number);
	output_number=first_number/second_number;
	printf("Quotient of the two number is: %f\n", output_number);
	output_number=first_number*second_number;
	printf("Product of the two number is: %f\n", output_number);
	return 0;
}
