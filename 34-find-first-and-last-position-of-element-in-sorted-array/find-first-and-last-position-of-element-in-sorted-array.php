class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $target
     * @return Integer[]
     */
    function searchRange($nums, $target) {
        $left = -1;
        $right = -1;
        $n = sizeof($nums);
        $l = 0; $r = $n-1;
        while($l <= $r){
            $mid = ($l+$r)>>1;
            if($nums[$mid] == $target){
                $left = $mid;
            }
            if($nums[$mid] >= $target)
                $r = $mid-1;
            else $l = $mid+1;
        }
        $l = 0; $r = $n-1;
        while($l <= $r){
            $mid = ($l+$r)>>1;
            if($nums[$mid] == $target){
                $right = $mid;
            }
            if($nums[$mid] > $target)
                $r = $mid-1;
            else $l = $mid+1;
        }
        return [$left, $right];
    }
}