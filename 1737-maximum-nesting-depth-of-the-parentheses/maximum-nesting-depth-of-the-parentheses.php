class Solution {

    /**
     * @param String $s
     * @return Integer
     */
    function maxDepth($s) {
        $n = strlen($s);
        $ans = $cur = 0;
        for($i=0; $i<$n; ++$i){
            if($s[$i] === '('){
                $cur++;
            }
            if($s[$i] === ')')
                $cur--;
            $ans = max($ans,$cur);
        }
        return $ans;
    }
}