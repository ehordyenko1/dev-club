<?php  



 	function arrayMin($array, $size) {
    $min = $array[0];
    
    for ( $i = 1; $i < $size; $i++ ) {
        if ( $array[$i] < $min ) {
            $min = $array[$i];
        }
    }
    return $min;
}

?>