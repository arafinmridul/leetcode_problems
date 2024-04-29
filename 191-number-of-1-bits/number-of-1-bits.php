class Solution {

    /**
     * @param Integer $n
     * @return Integer
     */
    function hammingWeight($n) {
        $ans = 0;
        while($n > 0){
            if($n & 1) ++$ans;
            $n >>= 1;
        }
        return $ans;
    }
}