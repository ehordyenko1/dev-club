public class Car {
	private double fuelAmount;
    private double fuelCapacity;
    private double fuelConsumption;
    private Point location;
    private String model;

    public Car(double capacity, double consumption, Point location, String model) {
    	this.fuelConsumption = consumption;
    	this.fuelCapacity = capacity;
    	this.location = location;
    	this.model = model;
        this.fuelAmount = capacity;
    }

    public Car() {
    	this.fuelCapacity = 60;
    	this.fuelConsumption = 0.6;
        this.location = new Point(0, 0);
    }

    public double getFuelAmount() {
    	return this.fuelAmount;
    }

	public double getFuelCapacity() {
		return this.fuelCapacity;
	}

	public double getFuelConsumption() {
		return this.fuelConsumption;
	}

	public Point getLocation() {
		return this.location;
	}

	public String getModel() {
		return this.model;
	}

	public void drive(Point destination) throws OutOfFuelException{
		double fuelNeeded = this.location.distance(destination) * this.fuelConsumption;

        if ( this.fuelAmount < fuelNeeded ) {
            throw new OutOfFuelException();
        }

        this.fuelAmount -= fuelNeeded;
        this.location = destination;
	}

    public void drive(double x, double y) throws OutOfFuelException{
            this.drive(new Point(x, y));
    }   

    public void refill(double fuel) throws ToMuchFuelException {
        if (fuel > this.fuelCapacity) {
            throw new ToMuchFuelException();
        }
        this.fuelAmount += fuel;

        if (fuelAmount > this.fuelCapacity) {
            throw new ToMuchFuelException();
        }
    }


    public String toString() {
    	return  "(" + this.model + "," + this.fuelAmount + "/" + this.fuelCapacity + "," + this.location + ")";
    }

}