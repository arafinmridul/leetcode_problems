class Solution {

    /**
     * @param Integer $numRows
     * @return Integer[][]
     */
    function generate($numRows) {
        $cur = array([1]);
        for($i=1; $i<$numRows; ++$i){
            $push = array();
            $end = end($cur);
            $n = sizeof($end);
            array_push($push, $end[0]);
            for($j=1; $j<$n; ++$j){
                array_push($push, $end[$j]+$end[$j-1]);
            }
            array_push($push, $end[$n-1]);
            array_push($cur, $push);
        }
        return $cur;
    }
}