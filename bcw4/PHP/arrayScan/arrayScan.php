<?php  

 	function arrayScan($in, $array, $limit) {
    $quantity = 0;
    
    for ( ; $quantity < $limit && fscanf($in, "%d", $array[$quantity]) == 1; $quantity++ );
    	return $quantity;
	}

?>