class Solution {

    /**
     * @param Integer[] $height
     * @return Integer
     */
    function maxArea($height) {
        $n = sizeof($height);
        $ans = 0;
        $l = 0; $r = $n-1;
        while($l < $r){
            $mn = min($height[$l], $height[$r]);
            $ans = max($ans, $mn*($r-$l));
            $height[$l] > $height[$r] ? $r-- : $l++;
        }
        return $ans;
    }
}