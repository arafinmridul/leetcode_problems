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
            if($i > 0 && $nums[$i] == $nums[$i - 1]) continue;
            $to_get = -1 * $nums[$i];
            $l = $i+1; $r = $n-1;
            while($l < $r) {
                if($nums[$l] + $nums[$r] == $to_get) {
                    array_push($ans, [$nums[$i], $nums[$l], $nums[$r]]);
                    $l++;
                    // Skip duplicate values
                    while($l < $r && $nums[$l] == $nums[$l - 1]) $l++;
                }
                if($nums[$l] + $nums[$r] < $to_get) {
                    $l++;
                } else {
                    $r--;
                }
            }
        }
        return $ans;
    }
}