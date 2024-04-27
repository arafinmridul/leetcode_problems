class Solution {

    /**
     * @param String $s
     * @return Boolean
     */
    function isPalindrome($s) {
        $s = strtolower($s);
        $n = strlen($s);
        $str = "";
        for($i=0; $i<$n; ++$i){
            if(($s[$i] >= 'a' and $s[$i] <= 'z') or ($s[$i]<='9' and $s[$i]>='0'))
                $str .= $s[$i];
        }
        $rev = strrev($str);
        if($str === $rev)
            return true;
        else return false;
    }
}