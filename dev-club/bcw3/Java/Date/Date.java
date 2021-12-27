public class Date {
	private int day;
	private int month;
	private int year;
	private void validate(int day, int month, int year) throws InvalidDateException {
		int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

		if ( year % 4 == 0 ) {
	        daysInMonth[2] = 29;
	    }

	    if ( month < 1 || month > 12 ) {
	        throw new InvalidDateException("INVALID DATE !!!");
	    }

	    if ( day < 1 || day > daysInMonth[month] ) {
	        throw new InvalidDateException("INVALID DATE !!!");
	    }
	}


	public Date(int day, int month, int year) throws InvalidDateException {
		this.day = day;
		this.month = month;
		this.year = year;
		this.validate(day, month, year);
	}

	public Date() {
		this.day = 26;
		this.month = 2;
		this.year = 1994;
	}

	public int getDay() {
		return this.day;
	}

	public int getMonth() {
		return this.month;
	}

	public int getYear() {
		return this.year;
	}

	public String toString() {
		return ( "("  + this.day + "," + this.month + "," + this.year + ")" );
	}
}