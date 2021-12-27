<?php  

	$size = fgets(STDIN);

    for ( $row = 1, $col = 1, $counter = 0; $row <= $size; $row++ ) {
        for ( $col = 1; $col < $size; $col++ ) {
            $counter = $size * $size - $size * $row + $col;
            echo $counter . ' ';
        }
        $counter = $size * $size - $size * $row + $col;
        echo $counter . PHP_EOL;
    }

?>