<?php
	$max = fgets(STDIN);
    $divisor = 3;
    
    $max -= $max % $divisor;
    
    for ( $i = 0; $i < $max; $i += $divisor ) {
        echo $i . PHP_EOL;
    }
    echo $max . PHP_EOL;

?>