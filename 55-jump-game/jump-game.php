class Solution {

    /**
     * @param Integer[] $nums
     * @return Boolean
     */
    function canJump($nums) {
        $n = sizeof($nums);
        $zero = 0;
        for($i = $n-2; $i>=0; --$i){
            if($nums[$i] > $zero)
                $zero = 0;
            if($nums[$i] == 0 or $zero)
                $zero++;
        }
        if($zero) return false;
        return true;
    }
}