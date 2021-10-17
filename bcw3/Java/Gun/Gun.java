public class Gun {
	private int amount;
    private int capacity;
    private boolean isReady;
    private String model;
    private int totalShots;

    public Gun(String model, int capacity) {
	    this.capacity = capacity;
	    this.model = model;
	    this.amount = 0;
	    this.totalShots = 0;
	    this.isReady = false;
	}

	public Gun() {
		this.capacity = 8;
		this.model = "Beretta";
	}

	public int getAmount()  {
    	return amount;
	}

	public int getCapacity()  {
    	return capacity;
	}

	public boolean ready()  {
    	return isReady;
	}

	public String getModel() {
    	return model;
	}

	public int getTotalShots() {
    	return totalShots;	
    }

    public void prepare() {
    	this.isReady = !this.isReady;
    }

    public void reload() {
    	this.amount = this.capacity;
    }

    public void shoot() throws NotReadyException, OutOfRoundsException{
    	if ( !ready() ) {
       	throw new NotReadyException();
   		}

   		if ( amount == 0 ) {
       	throw new OutOfRoundsException();
   		}

    	System.out.println("Bang!");

    	this.amount -= 1;
    	this.totalShots += 1;
	}
	
	public String toString() {
		return ( "("+ this.model + ", " + this.amount + "/" + this.capacity + ", " + this.totalShots + ")" );
	}
}