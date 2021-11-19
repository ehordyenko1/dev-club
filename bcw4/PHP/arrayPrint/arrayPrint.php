<?php  

	function arrayPrint($out, $array, $size) {
	   	$last = $size - 1;
	    
	    for ( $i = 0; $i < $last; $i++ ) {
	        fprintf($out, "%d ", $array[$i]);
	    }
	    fprintf($out, "%d\n", $array[$last]);
	}

?>