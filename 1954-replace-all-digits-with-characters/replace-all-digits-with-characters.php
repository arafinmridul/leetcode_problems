class Solution {

    /**
     * @param String $s
     * @return String
     */
    function replaceDigits($s) {
        $n = strlen($s);
        for($i=1; $i<$n; $i+=2){
            $c = $s[$i-1];
            $d = ord($s[$i]) - ord('0');
            while($d--)
                $c++;
            $s[$i] = $c;
        }
        return $s;
    }
}