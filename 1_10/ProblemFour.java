

public class ProblemFour {

	private static int getNumberOfDigits( int value ) {
		int digits = 0;
		while( value != 0 ) {
			value /= 10;
			digits++;
		}

		return digits;
	}

	private static boolean isPalindrome( int value ) {
		int digits = getNumberOfDigits( value );

		for( int i = 0, j = digits - 1; i < j; i++, j-- ) {
			if( ( value % (int) Math.pow( 10, j + 1 ) ) / (int) Math.pow( 10, j ) !=
				( value % (int) Math.pow( 10, i + 1 ) ) / (int) Math.pow( 10, i ) ) {
				return false;
			}
		}

		return true;
	}

	public static void main( String [] args ) {
		int max = 0;
		int value = 0;
		for( int i = 100; i <= 999; i++ ) {
			for( int j = i; j <= 999; j++ ) {
				value = i * j;
				if( isPalindrome( value ) && ( value > max ) ) {
					max = value;
				}
			}
		}

		System.out.print( "The largest palindrome is: " );
		System.out.println( max );
	}
}
