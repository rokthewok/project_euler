
public class ProblemTen {
	public static boolean isPrime( long value ) {
		long test = (long) Math.sqrt( value );
		
		for( long i = 3; i <= test; i+=2 ) {
			if( ( value % i ) == 0 ) {
				return false;
			}
		}
		
		return true;
	}
	
	public static void main( String [] args ) {
		long sum = 0;
		
		for( long i = 3; i < 2000000; i++ ) {
			if( ( i % 2 ) == 0 ) {
				continue;
			}
			
			if( isPrime( i ) ) {
				sum += i;
			}
		}
		
		sum += 2;
		System.out.printf( "The total is: %d\n", sum );
	}
}
