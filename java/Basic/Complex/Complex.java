public class Complex {
	private double real;
	private double imaginary;

	public Complex (double real, double imaginary) {
		this.real = real;
		this.imaginary = imaginary; 
	}

	public Complex() {
		this.real = 0;
		this.imaginary = 0;
	}

	public double getReal() {
		return this.real;
	}

	public double getImaginary() {
		return this.imaginary;
	}

	public boolean equal(Complex other) {
		return this.real == other.real && this.imaginary == other.imaginary;
	}

	public boolean notequals(Complex other) {
		return !(this.real == other.real && this.imaginary == other.imaginary);
	}

	public void increment(Complex other) {
		this.real += other.real;
		this.imaginary += other.imaginary;
	}

	public void decrement(Complex other) {
		this.real -= other.real;
		this.imaginary -= other.imaginary;
	}

	public Complex sum(Complex other) {
		Complex result = this;

		result.real += other.real;
		result.imaginary += other.imaginary;

		return result;
	}

	public Complex substr(Complex other) {
		Complex result = this;

		result.real -= other.real;
		result.imaginary -= other.imaginary;
		
		return result;
	}

	public Complex multiple(Complex other) {
		Complex result = this;

		result.real *= other.real;
		result.imaginary *= other.imaginary;

		return result;
	}

	public String toString() {
		return ("(" + this.real + "+" + this.imaginary + "i" + ")");
	}



}