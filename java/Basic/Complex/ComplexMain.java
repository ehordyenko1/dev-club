public class ComplexMain{
	public static void main(String[] args) {
		Complex real = new Complex(3, 1);
		Complex imaginary = new Complex(5, 2);

		if ( real.notequals(imaginary) ) {
			System.out.println("true");
		} else {
			System.out.println("false");
		}

		// System.out.println(real.sum(imaginary));

		// System.out.println(real.multiple(real));

	}

}