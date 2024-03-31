class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $val
     * @return Integer
     */
    function removeElement(&$nums, $val) {
        $n = sizeof($nums);
        $k = 0;
        for($i=0; $i<$n; ++$i){
            if($nums[$i] == $val)
                $nums[$i] = '_';
            else ++$k;
        }
        sort($nums);
        return $k;
    }
}