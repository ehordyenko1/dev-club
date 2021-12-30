<?php 

class Unit {
    private $name;
    private $damage;
    private $hitPointsLimit;
    private $hitPoints;

    public function Unit($name, $hp, $dmg) {
        $this->name = $name;
        $this->hitPointsLimit = $hp;
        $this->damage = $dmg;
        $this->hitPoints = $hp;
    }

    public function ensureIsAlive() {
       if ( $this->hitPoints == 0 ) {
           throw UnitIsDead();
       }
    }


    public function getDamage() {
        return $this->damage;
    }

    public function getHitPoints() {
        return $this->hitPoints;
    }

    public function getHitPointsLimit() {
        return $this->hitPointsLimit;
    }

    public function getName() {
        return $this->name;
    }

    public function addHitPoints($hp) {
            $this->ensureIsAlive();

            $this->hitPoints += $hp;

            if ( $this->hitPoints > $this->hitPointsLimit ) {
                $this->hitPoints = $this->hitPointsLimit;
            }
        }

    public function takeDamage($dmg) {
            $this->ensureIsAlive();

            $this->hitPoints -= $dmg;
        }

    public function attack($enemy) {
            $this->ensureIsAlive();

            $enemy.$this->takeDamage($this->damage);

            if ( $this->hitPoints <= 0 ) {
                throw Exception("Unit Is Dead");
            } else {
                $enemy.$this->counterAttack($this);
            }
        }

    public function counterAttack($enemy) {
            $dmg = $this->damage / 2;

            $enemy.$this->hitPoints -= $dmg;
        }

    public function __toString() {
        return sprintf(PHP_EOL . $this->name . " has : " . $this->hitPoints . "/" . $this->hitPointsLimit . PHP_EOL . "Damage of " . $this->name . " : " . $this->damage . PHP_EOL . PHP_EOL);
    }
}

$Soldier = new Unit("Soldier", 50, 15);
$Knight = new Unit("Knight", 40, 20);

$Knight->attack($Soldier);

echo $Soldier->getHitPoints();

echo $Soldier;
echo $Knight;

?>