#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c, done = 0;
	for( a = 1; a < 1000; a++ ) {
		for( b = 1; b < 1000 - a; b++ ) {
			c = 1000 - a - b;
			if( ( pow( a, 2 ) + pow( b, 2 ) ) == pow( c, 2 ) ) {
				done = 1;
				break;
			}
		}

		if( done ) break;
	}

	int product = a * b * c;
	printf( "The product of a, b, and c is: %d\n\t"
		"where a = %d, b = %d, c = %d\n", product, a, b, c );
	return 0;
}
