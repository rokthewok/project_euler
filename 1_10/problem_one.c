#include <stdio.h>
#include <stdlib.h>

int main( void ) {
	int i = 0;
	int total = 0;
	for( i = 0; i < 1000; i++ ) {
		if( ( i % 3 ) == 0 ) {
			total += i;
		} else if( ( i % 5 ) == 0 ) {
			total += i;
		} else;
	}
	
	printf( "The sum of all numbers below\n"
		"one thousand that are\n"
		"multiples of 3 and 5 is: %d", total );

	return 0;
}
