<?php


class Gun {
    private $capacity;
    private $model;
    private $amount;
    private $totalShots;
    private $isReady;

public function Gun($model, $capacity) {
    $this->capacity = $capacity;
    $this->model = $model;
    $this->amount = 0;
    $this->totalShots = 0;
    $this->isReady = false;
}

public function getAmount() {
    return $this->amount;
    echo $this->amount . PHP_EOL;
}

public function getCapacity() {
    return $this->capacity;
}

public function ready() {
    return $this->isReady;
}

public function getModel() {
    return $this->model;
}

public function getTotalShots() {
    return $this->totalShots;
}

public function prepare() {
    $this->isReady = $this->isReady = true;
}

public function reload() {
    if ( $this->amount < $this->capacity  ) {
        $this->amount = $this->capacity;
    }
}

public function shoot() {
    if ( $this->isReady = false ) {
       throw new Exception("ZeroAmount");
   }
   if ( $this->amount == 0 ) {
        throw new Exception("ZeroAmount");
   }

    echo "Bang!" . PHP_EOL;

    $this->amount -= 1;
    $this->totalShots += 1;
}

    public function __toString() {
        return sprintf("Model : " . $this->model . PHP_EOL . "Amount : " . $this->amount . "/" . $this->capacity . PHP_EOL . "Total shots : " . $this->totalShots . PHP_EOL);

    }
}


$gun = new Gun("Beretta", 10);

$gun->prepare();
$gun->reload();
$gun->shoot();

echo $gun;

?>