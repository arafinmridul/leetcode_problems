class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer
     */
    function singleNumber($nums) {
        sort($nums);
        $n = sizeof($nums);
        for($i=0; $i<$n; $i+=2){
            if($i === $n-1)
                return $nums[$i];
            if($nums[$i] != $nums[$i+1])
                return $nums[$i];
        }
    }
}