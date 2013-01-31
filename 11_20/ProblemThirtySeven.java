import java.util.List;
import java.util.ArrayList;

public class ProblemThirtySeven {
	public static boolean isPrime( long value ) {
		if( value == 1L ) return false;

		long stop = (long) Math.sqrt( value ) + 1L;
		for( int i = 2; i < stop; i++ ) {
			if( ( value % i ) == 0 ) {
				return false;
			}
		}
		
		return true;
	}

	public static boolean isTruncatable( long prime ) {
		long power = 10;
		long value = prime;
		
		while( value > 0 ) {
			value /= 10;
			if( !isPrime( value ) ) return false;
			power *= 10;
		}

		value = prime;
		while( power > 1 ) {
			value %= power;
			if( !isPrime( value ) ) return false;
			power /= 10;
		}

		return true;
	}
	
	public static void main( String [] args ) {
		long prime = 11;
		
		List<Long> primes = new ArrayList<Long>( 11 );

		int count = 0;
		while( count < 11 ) {
			if( isTruncatable( prime ) ) {
				System.out.printf( "Truncatable prime: %d\n", prime );
				primes.add( prime );
				count++;
			}

			prime += 2;
			while( !isPrime( prime ) ) {
				prime += 2;
			}
		}

		long sum = 0L;
		for( Long value : primes ) {
			sum += value;
		}
		
		System.out.printf( "The sum of the only eleven truncatable primes is: %d\n", sum );
	}
}
