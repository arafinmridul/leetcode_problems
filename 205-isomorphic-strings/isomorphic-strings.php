class Solution {

    /**
     * @param String $s
     * @param String $t
     * @return Boolean
     */
    function isIsomorphic($s, $t) {
        $track = array();
        $exist = array();
        for($i=0; $i<strlen($s); ++$i){
            if(!isset($track[$s[$i]]) and !isset($exist[$t[$i]])){
                $track[$s[$i]] = $t[$i];
                $exist[$t[$i]] = true;
                continue;
            }
            if($track[$s[$i]] != $t[$i])
                return false;
        }
        return true;
    }
}