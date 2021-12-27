<?php  

class Vector {
    private $x;
    private $y;

    public function Vector($x, $y) {
        $this->x = $x;
        $this->y = $y;
    }

    public function getX() {
        return $this->x;
    }

    public function getY() {
        return $this->y;
    }

    public function setX($value) {
        $this->x = $x;
    }

    public function setY($value) {
        $this->y = $y;
    }

    public function len() {
        return hypot($this->x, $this->y);
    }

    public function compare($other) {
        return $this->x == $other->x && $this->y == $other->y;
    }

    public function isNotEqual($other) {
        return !($this == $other);
    }

    public function increment($other) { 
        $this->x += $other->x;
        $this->y += $other->y;
    }

    public function decrement($other) {
        $this->x -= $other->x;
        $this->y -= $other->y;
    }


    public function sum($other) {
        $result = $this;
        
        $result->x += $other->x;
        $result->y += $other->y;

        return $result;
    }

    public function substraction($other) {
        $result = $this;
        
        $result->x -= $other->x;
        $result->y -= $other->y;

        return $result;
    }

    public function __toString() {
            return sprintf("(%g, %g)", $this->x, $this->y);
        }
    }


$a = new Vector(1, 2);
$b = new Vector(2, 3);

echo $a;
echo $b;

?>