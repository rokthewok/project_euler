public class ProblemThree {
	public static boolean isPrime( long value ) {
		for( int i = 2; i < value / 3 + 1; i++ ) {
			if( ( value % i ) == 0 ) {
				return false;
			}
		}
		
		return true;
	}
	
	public static void main( String [] args ) {
		long value = 600851475143L;
		long prime = 1;
		
		for( long i = 1; i <= value; i += 2L ) {
			System.out.printf( "Testing: %d\n", i );
			if( isPrime( i ) &&
				( ( value % i ) == 0 ) ) {
				prime = i;
				System.out.printf( "New prime: %d\n", i );
			}
		}
		
		System.out.printf( "The largest prime factor is: %d\n", prime );
	}
}
