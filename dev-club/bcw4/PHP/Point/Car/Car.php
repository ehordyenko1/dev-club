<?php  

include "Point.php";

class Car {
    private $location;
    private $model;
    private $fuelAmount;
    private $fuelCapacity;
    private $fuelConsumption;

    public function Car( $capacity = 60, $consumption = 0.5, $location = $defaultPoint,$model = "Walkswagen") {
        $this->fuelAmount = $capacity;
        $this->fuelCapacity = $capacity;
        $this->fuelConsumption = $consumption;
        $this->location = $location;
        $this->model = $model;
    }

    public function getFuelAmount() {
        return $this->fuelAmount;
    }

    public function getFuelCapacity() {
        return $this->fuelCapacity;
    }

    public function getFuelConsumption() {
        return $this->fuelConsumption;
    }

    public function getLocation() {
        return $this->location;
    }

    public function getModel() {
        return $this->model;
    }

    public function drive($destination) {
        $fuelNeeded = $this->location->distance($destination) * $this->fuelConsumption;

            if ( $this->fuelAmount < $fuelNeeded ) {
                throw new OutOfFuel();
            }

            $this->fuelAmount -= $fuelNeeded;
            $this->location = $destination;
    }

    public function drive1($x, $y) {
        $point = new Point($x, $y);
        $this->drive($point);
    }

    public function refill($fuel) {
        if ($fuel > $this->fuelCapacity) {
            throw new ToMuchFuel();
        }
        $this->fuelAmount += $fuel;
    }

    public function __toString() {
        return sprintf("Name of car : " . $this->name . PHP_EOL . "Fuel amount : " . $this->fuelAmount . " / " . $this->fuelCapacity);
    }

}

$defaultPoint = new Point(0, 0);

// $car = new Car();

// $car->drive1(100, 100);

// echo $car;



?>