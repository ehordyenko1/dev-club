<?php 

	$max = fgets(STDIN);
    
    $max -= $max % 2;
    $multiple = 0;
    
    for ( $multiple = 0; $multiple < $max; $multiple += 2 ) {
        echo $multiple . PHP_EOL;
    }
    
    echo $max. PHP_EOL;

?>