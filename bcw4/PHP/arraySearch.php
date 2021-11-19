<?php  


function arraySearch($array, $size, $needle) {
    for ( $size -= 1; 0 <= $size; $size-- ) {
        if ( $needle == $array[$size] ) {
            return $size;
        }
    }
    return -1;
}

?>