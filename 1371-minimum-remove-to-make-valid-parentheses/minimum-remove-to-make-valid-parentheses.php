class Solution {

    /**
     * @param String $s
     * @return String
     */
    function minRemoveToMakeValid($s) {
        $open = 0;
        $ans = "";
        $n = strlen($s);
        for($i=0; $i<$n; ++$i){
            if($open==0 and $s[$i]==')')
                continue;
            if($s[$i] == '(')
                $open++;
            if($s[$i]==')')
                $open--;
            $ans .= $s[$i];
        }
        $n = strlen($ans);
        $ans2 = "";
        $close = 0;
        for($i=$n-1; $i>=0; --$i){
            if($close==0 and $ans[$i]=='(')
                continue;
            if($ans[$i] == ')')
                $close++;
            if($ans[$i]=='(')
                $close--;
            $ans2 .= $ans[$i];
        }
        return strrev($ans2);
    }
}