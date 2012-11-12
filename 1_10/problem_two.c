#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long fourMillion = 4000000l;

unsigned long innerFib( unsigned long total, 
		unsigned long last, unsigned long lastLast ) {
	unsigned long current = last + lastLast;
	if( current >= fourMillion ) {
		return total;
	} else if( ( current % 2 ) == 0 ) {
		total += current;
		return innerFib( total, current, last );
	} else {
		return innerFib( total, current, last );
	}
}

unsigned long outerFib() {
	return innerFib( 0, 1, 0 );
}

int main( void ) {
	unsigned long total = outerFib();

	printf( "The total is: %lu", total );

	return 0;
}
