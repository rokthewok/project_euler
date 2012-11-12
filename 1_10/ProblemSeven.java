
public class ProblemSeven {

		public static boolean isPrime( long value ) {
			int test = (int) Math.sqrt( value );
			for( int i = 2; i <= test; i++ ) {
				if( ( value % i ) == 0 ) {
					return false;
				}
			}
			return true;
		}
		
		public static void main( String [] args ) {
			long prime = 1;
			long value = prime;
			int count = 0;
			while( true ) {
				value++;
				if( isPrime( value ) ) {
					count++;
					prime = value;
					System.out.printf( "The %d prime is: %d\n", count, prime );
				}
				
				if( count == 10001 ) {
					break;
				}
			}
		}
}
