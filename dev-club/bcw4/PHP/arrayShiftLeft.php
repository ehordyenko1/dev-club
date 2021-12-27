<?php  

function arrayShiftLeft($array, $size) {
    $buffer = $array[0];
    
    for ( $i = 1; $i < $size; $i++ ) {
        $array[$i-1] = $array[$i];
    }
    $array[$size-1] = $buffer;
    print_r($array);
}

?>