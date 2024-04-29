class Solution {

    /**
     * @param String $a
     * @param String $b
     * @return String
     */
    function addBinary($a, $b) {
        $res = 0;
        $i = strlen($a) - 1;
        $j = strlen($b) - 1;
        $carry = 0;
        while($i >= 0 || $j >= 0) {
            $sum = $carry;
            if($i >= 0)
                $sum += $a[$i--];
            if($j >= 0)
                $sum += $b[$j--];
            $carry = $sum > 1 ? 1: 0;
            $res.=strval($sum % 2);
        }
        if($carry)
            $res .= strval($carry);
        $res = strrev($res);
        return substr($res,0,-1);
    }
}