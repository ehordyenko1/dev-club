<?php

function gcd($a, $b) {
    if ( $b == 0 ) {
        return $a;
    }
    return gcd($b, $a % $b);
}

function lcm($a, $b) {
    return $a / gcd($a, $b) * $b;
}

    $in = fopen("task.in", "r");
    $out = fopen("task.out", "w");
    
    fscanf($in, "%d %d", $a, $b);
    fclose($in);
    
    fprintf($out, "%d\n", lcm($a, $b));
    fclose($out);

    ?>