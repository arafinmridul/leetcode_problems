class Solution {

    /**
     * @param Integer[][] $matrix
     * @return NULL
     */
    function rotate(&$matrix) {
        $n = sizeof($matrix);
        $a = array();
        for($i=0; $i<$n; ++$i){
            for($j=0; $j<$n; ++$j){
                $a[$j][$n-1-$i] = $matrix[$i][$j];
            }
        }
        for($i=0; $i<$n; ++$i){
            for($j=0; $j<$n; ++$j)
                $matrix[$i][$j] = $a[$i][$j];

        }
        return NULL;
    }
}