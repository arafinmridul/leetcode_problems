class Solution {

    /**
     * @param String $s
     * @return Integer
     */
    function lengthOfLastWord($s) {
        $s = trim($s);
        $n = strlen($s);
        $ans = 0;
        for($i=$n-1; $i>=0; --$i){
            if($s[$i] == ' ')
                break;
            else ++$ans;
        }
        return $ans;
    }
}