class Solution {

    /**
     * @param Integer[] $cost
     * @return Integer
     */
    public $n = 0;
    public $dp = array();
    function _dp($cur, $cost){
        if($cur >= $this->n)
            return 0;
        if($this->dp[$cur] != -1)
            return $this->dp[$cur];
        $res = min($this->_dp($cur+1, $cost), $this->_dp($cur+2, $cost));
        return $this->dp[$cur] = $cost[$cur] + $res;
    }
    function minCostClimbingStairs($cost) {
        $this->n = sizeof($cost);
        $ans = 1000000000;
        for($j=0; $j<2; ++$j){
            for($i=0; $i<$this->n; ++$i)
                $this->dp[$i] = -1;
            $ans = min($ans, $this->_dp($j, $cost));
        }
        return $ans;
    }
}