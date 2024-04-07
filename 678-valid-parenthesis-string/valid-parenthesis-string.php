class Solution {

    /**
     * @param String $s
     * @return Boolean
     */
    function checkValidString($s) {
        $n = strlen($s);
        $left_mx = 0;
        $left_mn = 0;
        for($i=0; $i<$n; ++$i){
            if($s[$i] == '('){
                $left_mn++;
                $left_mx++;
            }
            else if($s[$i] == ')'){
                $left_mn--;
                $left_mx--;
            }
            else{
                $left_mn--;
                $left_mx++;
            }
            if($left_mx < 0)
                return false;
            if($left_mn < 0)
                $left_mn = 0;
        }
        return $left_mn == 0;
    }
}