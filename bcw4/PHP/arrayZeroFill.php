<?php  

function arrayZeroFill($array, $size) {
    for ( $i = 0; $i < $size; $i++ ) {
        $array[$i] = 0;
        print_r($array);
    }
}

?>