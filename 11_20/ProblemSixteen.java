import java.util.ArrayList;

public class ProblemSixteen {

	public static void main( String [] args ) {
		ArrayList<Integer> digits = new ArrayList<Integer>();
		digits.add( 2 );

		for( int i = 1; i < 1000; i++ ) {
			for( int j = 0; j < digits.size(); j++ ) {
				digits.set( j, digits.get( j ) * 2 );
			}

			for( int j = 0; j < digits.size(); j++ ) {
				if( j == digits.size() - 1 &&
					digits.get( j ) >= 10 ) {
					digits.set( j, digits.get( j ) % 10 );
					digits.add( 1 )	;
				} else if( digits.get( j ) >= 10 ) {
					digits.set( j, digits.get( j ) % 10 );
					digits.set( j + 1, digits.get( j + 1 ) + 1 );
				} else;
			}
		}

		Integer total = new Integer( 0 );
		for( Integer digit : digits ) {
			total += digit;
		}

		System.out.println( "The total of the digits is: " + total.toString() );
	}
}
