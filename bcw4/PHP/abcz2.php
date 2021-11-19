<?php

    $even = fgets(STDIN);
    
    if ( $even % 2 == 0 ) {
        echo "alpha" . PHP_EOL;
    }
    if ( $even % 3 == 0 ) {
        echo "bravo" . PHP_EOL;
    }
    if ( $even % 5 == 0 ) {
        echo "charlie" . PHP_EOL;
    } else if ( $even % 2 != 0 && $even % 3 != 0 ) {
        echo "zulu" . PHP_EOL;
    }

?>