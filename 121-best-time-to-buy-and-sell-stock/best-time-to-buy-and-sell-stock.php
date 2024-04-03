class Solution {

    /**
     * @param Integer[] $prices
     * @return Integer
     */
    function maxProfit($prices) {
        $n = sizeof($prices);
        $help = array();
        for($i=0; $i<$n; ++$i){
            $help[$prices[$i]]++;
        }
        $ans = 0;
        ksort($help);
        $help_key = array_keys($help);
        $cur = $n-1;
        for($i=0; $i<$n; ++$i){
            $help[$prices[$i]]--;
            while($cur>= 0 and $help[$help_key[$cur]] == 0)
                $cur--;
            $ans = max($ans, $help_key[$cur] - $prices[$i]);
        }
        return $ans;
    }
}