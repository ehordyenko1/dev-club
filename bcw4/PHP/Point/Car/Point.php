<?php
    class Point {
        private $x;
        private $y;

        public function Point($x = 0, $y = 0) {
            $this->x = $x;
            $this->y = $y;
        }

        public function getX() {
            return $this->x;
        }

        public function getY() {
            return $this->y;
        }

        public function setX($x) {
            $this->x = $x;
        }

        public function setY($y) {
            $this->y = $y;
        }

        public function distance($other) {
            return hypot($this->x-$other->x, $this->y-$other->y);
        }

        public function __toString() {
            return sprintf("(%g, %g)", $this->x, $this->y);
        }
    }

    function compare($x, $y) {
        if ( $x == $y ) {
            echo $x . " is equal to " . $y . PHP_EOL;
        } else {
            echo $x . " is not equal to " . $y . PHP_EOL;
        }
    }

    function diff($x, $y) {
        if ( $x === $y ) {
            echo $x . " and " . $y . " the same" . PHP_EOL;
        } else {
            echo $x . " and " . $y . " different" . PHP_EOL;
        }
    }

?>