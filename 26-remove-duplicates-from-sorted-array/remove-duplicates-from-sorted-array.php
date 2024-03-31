class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer
     */
    function removeDuplicates(&$nums) {
        $map = array();
        $n = sizeof($nums);
        $k = 0;
        for($i=0; $i<$n; ++$i){
            if(!isset($map[$nums[$i]])){
                $map[$nums[$i]] = 1;
                ++$k;
            }
            else $nums[$i] = '_';
        }
        sort($nums);
        return $k;
    }
}