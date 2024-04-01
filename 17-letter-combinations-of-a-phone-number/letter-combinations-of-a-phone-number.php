class Solution {

    /**
     * @param String $digits
     * @return String[]
     */
    public $track = array(
        "2" => "abc", "3" => "def", "4" => "ghi",
        "5" => "jkl", "6" => "mno", "7" => "pqrs",
        "8" => "tuv", "9" => "wxyz",
    );
    public $ans = [];
    function backtrack($i, $curStr, $digits){
            if(strlen($curStr) === strlen($digits)){
                array_push($this->ans, $curStr);
                return;
            }
            $n = strlen($this->track[$digits[$i]]);
            for($j=0; $j<$n; $j++){
                $c = $this->track[$digits[$i]][$j];
                $this->backtrack($i+1, $curStr . $c, $digits);
            }
    }
    function letterCombinations($digits) {
        if(!strlen($digits)) return $this->ans;
        $this->backtrack(0, "", $digits);
        return $this->ans;
    }
}