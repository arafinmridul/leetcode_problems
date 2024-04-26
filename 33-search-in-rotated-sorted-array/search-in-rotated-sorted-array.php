class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $target
     * @return Integer
     */
    function search($nums, $target) {
        $n = sizeof($nums);
        if($nums[0] === $target) return 0;
        if($nums[$n-1] === $target) return $n-1;
        $l = 0; $r = $n-1;
        while($l <= $r){
            $mid = ($l+$r)>>1;
            if($nums[$mid] == $target) return $mid;
            if($target > $nums[0] and $nums[$mid] < $nums[0]){
                $r = $mid-1; continue;
            }
            if($target < $nums[0] and $nums[$mid] > $nums[0]){
                $l = $mid+1; continue;
            }
            if($mid+1 < $n and $nums[$mid+1]==$target){
                return $mid+1;
            }
            if($nums[$mid] > $target)
                $r = $mid-1;
            else $l = $mid+1;
        }
        return -1;
    }
}