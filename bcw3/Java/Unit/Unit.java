public class Unit {
    private int damage;
    private int hitPoints;
    private int hitPointsLimit;
    private String name;
    
    private void ensureIsAlive() throws UnitIsDeadException {
   		if ( hitPoints == 0 ) {
       		throw new UnitIsDeadException();
   		}
	}
  
    public Unit(String name, int hp, int dmg) {
	   	this.name = name;
	    this.hitPointsLimit = hp;
	    this.damage = dmg;
	    this.hitPoints = hp;
    }

    public Unit() {
    	this.name = "Knight";
    	this.hitPointsLimit = 200;
    	this.damage = 20;
    	this.hitPoints = hitPointsLimit;
    }

    public int getDamage() {
    	return damage;
    }

    public int getHitPoints() {
    	return hitPoints;
    } 

   	public int getHitPointsLimit() {
   		return hitPointsLimit;
   	}

    public String getName() {
    	return name;
    }

    public void addHitPoints(int hp) throws UnitIsDeadException{
        ensureIsAlive();

        this.hitPoints += hp;

        if ( hitPoints > hitPointsLimit ) {
            hitPoints = hitPointsLimit;
        }
    }

    public void takeDamage(int dmg) throws UnitIsDeadException {
        ensureIsAlive();

        this.hitPoints -= dmg;
    }

 	public void attack(Unit enemy) throws UnitIsDeadException {
        ensureIsAlive();

        enemy.takeDamage(damage);

        if ( hitPoints <= 0 ) {
            throw new UnitIsDeadException();
        } else {
            enemy.counterAttack(this);
        }
    }

    public void counterAttack(Unit enemy) {
        int dmg = damage / 2;

        enemy.hitPoints -= dmg;
    }

    public String toString() {
    	return ("(" + this.name +  " has : " + this.hitPoints + '/' + this.hitPointsLimit + 
        " and his/her damage is : " + this.damage + ")" );
    }
}