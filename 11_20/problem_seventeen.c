#include <stdio.h>
#include <stdlib.h>

int doThousands( int thousands );
int doHundreds( int hundreds );
int doTens( int tens );
int doLessThanTwenty( int tens );

int main( int argc, char ** argv ) {
	int thousands, hundreds, tens;
	long total = 0;
	int i;
	int start = atoi( argv[1] );
	int end = atoi( argv[2] );

	for( i = start; i <= end; i++ ) {
		thousands = i / 1000;
		hundreds = ( i % 1000 ) / 100;
		tens = i % 100;

		total += doThousands( thousands );
		total += doHundreds( hundreds );
		total += doTens( tens );

		if( hundreds > 0 && tens > 0 ) {
			total += 3; // add 3 for "and"
		}
	}
	
	printf( "The total is: %d\n", total );

	return 0;
}

int doThousands( int thousands ) {
	if( thousands == 0 ) return 0;
	return doLessThanTwenty( thousands ) + 8; // ___ + "thousand"
}

int doHundreds( int hundreds ) {
	if( hundreds == 0 ) return 0;
	return doLessThanTwenty( hundreds ) + 7; // ___ + "hundred"
}

int doTens( int tens ) {
	if( tens < 20 ) {
		return doLessThanTwenty( tens );
	}

	int ten = tens / 10;
	int ones = tens % 10;
	switch( ten ) {
	case 2:
		return 6 + doLessThanTwenty( ones ); // "twenty" + ____
		break;
	case 3:
		return 6 + doLessThanTwenty( ones ); // "thirty" + ____
		break;
	case 4:
		return 5 + doLessThanTwenty( ones ); // "forty" + ____
		break;
	case 5:
		return 5 + doLessThanTwenty( ones ); // "fifty" + ____
		break;
	case 6:
		return 5 + doLessThanTwenty( ones ); // "sixty" + ____
		break;
	case 7:
		return 7 + doLessThanTwenty( ones ); // "seventy" + ____
		break;
	case 8:
		return 6 + doLessThanTwenty( ones ); // "eighty" + ____
		break;
	case 9:
		return 6 + doLessThanTwenty( ones ); // "ninety" + ____
		break;
	default:
		return 0;
	}
}

int doLessThanTwenty( int tens ) {
	switch( tens ) {
	case 0:
		return 0;
		break;
	case 1:
		return 3; // one
		break;
	case 2:
		return 3; // two
		break;
	case 3:
		return 5; // three
		break;
	case 4:
		return 4; // four
		break;
	case 5:
		return 4; // five
		break;
	case 6:
		return 3; // six
		break;
	case 7:
		return 5; // seven
		break;
	case 8:
		return 5; // eight
		break;
	case 9:
		return 4; // nine
		break;
	case 10:
		return 3; // ten
		break;;
	case 11:
		return 6; // eleven
		break;
	case 12:
		return 6; // twelve
		break;
	case 13:
		return 8; // thirteen
		break;
	case 14:
		return 8; // fourteen
		break;
	case 15:
		return 7; // fifteen
		break;
	case 16:
		return 7; // sixteen
		break;
	case 17:
		return 9; // seventeen
		break;
	case 18:
		return 8; // eighteen
		break;
	case 19:
		return 8; // nineteen
		break;
	default:
		return 0;
	}
}
