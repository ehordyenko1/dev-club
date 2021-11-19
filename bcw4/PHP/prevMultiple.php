<?php

	$dividend = fgets(STDIN); 
	$divisor = fgets(STDIN); 
    $multiple;
    
    if ( $divisor < 0 ) {
        $divisor *= -1;
    }
    
    $multiple = $dividend - $dividend % $divisor;
    
    if ( $multiple > $dividend ) {
        $multiple -= $divisor;
    }
    
    echo $multiple . PHP_EOL

?>