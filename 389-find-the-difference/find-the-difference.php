class Solution {

    /**
     * @param String $s
     * @param String $t
     * @return String
     */
    function findTheDifference($s, $t) {
        $n = strlen($s);
        $a = array_fill(0,26,0);
        $b = array_fill(0,26,0);
        for($i=0; $i<$n; ++$i){
            $a[ord($s[$i])-ord('a')]++;
        }
        for($i=0; $i<$n+1; ++$i){
            $b[ord($t[$i])-ord('a')]++;
        }
       for($i=0; $i<26; ++$i){
           if($a[$i] != $b[$i]){
               return chr($i+ord('a'));
           }
       }
    }
}