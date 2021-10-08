import java.util.Arrays;

public class List {
	private int array[];
	private int capacity;
	private double multiplier;
	private int current;

	public List() throws OutOfMemoryException {
		int capacity = 100;
		double multiplier = 1.05;
		int current = 0;
		int array[];
		array = new int[capacity*4];

       	if ( array == null ) {
           throw new OutOfMemoryException();
       }
	}

	public int size() {
		return this.current;
	}

	public int max_size() {
		return this.capacity;
	}

	public void erase(int index) {
		int len = size();

    	for (int i = index; i < len; i++ ) {
        	this.array[i] = this.array[i + 1];
        	len -= 1;
    	}
	}

	public void insert(int value, int index) throws OutOfMemoryException{
		if ( index <= this.capacity && index >= 0 ) {
        	this.array[index] = value;
        	current += 1;
   		} else {
           throw new OutOfMemoryException();
       }
	}

	public int find(int value) {
    	int len = size();

    	for ( ; 0 <= len; len-- ) {
        	if ( value == array[len] ) {
            	return len;
        	}
   	 	}
    	System.out.println("Value doesn't exist");
	}

	public void push_back(int value) throws OutOfMemoryException {
   		int newCurrent = current + 1;

   		if ( newCurrent > capacity ) {
       		int newCapacity = capacity*(int)multiplier;
       		int []newArray = new int[newCapacity*4];

       	if ( newArray == null ) {
           throw new OutOfMemoryException();
       }

		capacity = newCapacity;
		array = newArray;
   		}

   		array[current] = value;
   		current = newCurrent;
	}



	public int pop_back() throws ZeroLenException {
	   	if ( current == 0 ) {
   			throw new ZeroLenException();
		}
   		current -= 1;
   		return array[current];
	}
	
	public void sort() {
	    int len = size();

	    for ( int i = 1; i < len; i++ ) {
	        int j = i;
	        int temp = array[i];
	        
	        for ( int prev = j - 1; j > 0 && temp < array[prev]; j--, prev-- ) {
	            array[j] = array[prev];
	        }
	        array[j] = temp;
	    }
	}

	public int returnValue(int index) {
	    int len = size();
	    if ( index <= len && index >= 0 ) {
	        return this.array[index];
	    } else {
	        System.out.println("wrong index");
	    }
	}

	public boolean equals(List other) {
	    int len = size();

	    for ( int i = 0; i < len; i++) {
	        return (this.array[i] == other.array[i]);
	    }
	}

	public boolean notequals(List other) {
	    int len = size();

	    for ( int i = 0; i < len; i++) {
	        return (this.array[i] != other.array[i]);
	    }
	}

	public String printArr() {
		System.out.println(Arrays.toString(array));
	}

	// public String toString(List list) {
	// 	return (java.util.Arrays.toString (array));
	// }
}
 

