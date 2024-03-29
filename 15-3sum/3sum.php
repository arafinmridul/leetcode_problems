class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer[][]
     */
    function threeSum($nums) {
        $n = sizeof($nums);
        sort($nums);
        $ans = array();
        for($i=0; $i<$n; ++$i){
            $to_get = -1 * $nums[$i];
            $l = $i+1; $r = $n-1;
            while($l < $r){
                if($nums[$l]+$nums[$r] == $to_get){
                    array_push($ans, [$nums[$i], $nums[$l], $nums[$r]]);
                    $l++;
                }
                if($nums[$l] + $nums[$r] < $to_get)
                    ++$l;
                else --$r;
            }
        }
        $uniqueAns = array_map('unserialize', array_unique(array_map('serialize', $ans)));
        return $uniqueAns;
        // return $ans;
    }
}