class Solution {

    /**
     * @param String $word
     * @param String $ch
     * @return String
     */
    function reversePrefix($word, $ch) {
        $n = strlen($word);
        $ans = "";
        $f = 1;
        for($i=0; $i<$n; ++$i){
            $ans .= $word[$i];
            if($f and $word[$i]==$ch){
                $f = 0;
                $ans = strrev($ans);
            }
        }
        return $ans;
    }
}