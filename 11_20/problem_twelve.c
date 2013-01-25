#include <stdio.h>
#include <math.h>

int main() {
	int stop;
	int count = 1;
	int triangle = 28;
	int n = 7;
	int factor;

	while( 1 ) {
		stop = sqrt( triangle );
		count = 2;	// accounts for 1 and itself
		
		for( factor = 2; factor <= stop; factor++ ) {
			if( ( triangle % factor ) == 0 ) {
				count+=2;
			}
		}
		
		if( count > 500 ) break;
		else { n++; triangle += n; }
	}

	printf( "The %dth triangle number is the "
			"first triangle number with over 500 "
			"factors - %d, to be precise\n", n, triangle );

	return 0;
}
