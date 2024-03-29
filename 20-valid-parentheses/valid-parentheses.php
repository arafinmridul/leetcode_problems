class Solution {

    /**
     * @param String $s
     * @return Boolean
     */
    function isValid($s) {
        $n = strlen($s);
        $stack = [];
        for($i=0; $i<$n; ++$i){
            $c = $s[$i];
            if($c=='{' or $c=='(' or $c=='[')
                array_push($stack, $c);
            else if(empty($stack) or (end($stack)!='(' and $c==')') or (end($stack)!='{' and $c=='}') or (end($stack)!='[' and $c==']'))
                return false;
            else array_pop($stack);
        }
        if(!empty($stack)) return false;
        return true;
    }
}