<?php 

	$max = fgets(STDIN);
    
    if ( $max % 2 == 0 ) {
        $max -= 1;
    }

    for ( $multiple = 1; $multiple < $max; $multiple += 2 ) {
        echo $multiple . PHP_EOL;
    }
    
    echo $max. PHP_EOL;

?>