#include <stdio.h>
#include <stdlib.h>

int main( void ) {
	long long sumOfSquares = 0;
	long long squareOfSums = 0;

	long long i;
	for( i = 1; i <= 100; i++ ) {
		sumOfSquares += i * i;
		squareOfSums += i;
	}

	squareOfSums *= squareOfSums;

	long long result = squareOfSums - sumOfSquares;

	printf( "The result is: %ld\n", result );

	return 0;
}
