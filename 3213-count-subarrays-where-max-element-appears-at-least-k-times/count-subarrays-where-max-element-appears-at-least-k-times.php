class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $k
     * @return Integer
     */
    function countSubarrays($nums, $k)
    {
        $n = sizeof($nums);
        $mx = max($nums);
        $ans = 0;
        $l = 0;
        $r = 0;
        $cur = 0;
        while ($r < $n) {
            while ($cur < $k and $r < $n) {
                if ($nums[$r] == $mx) {
                    ++$cur;
                }
                ++$r;
            }
            // echo $r . "\n";
            while ($cur == $k and $l < $r) {
                $ans += $n - $r + 1;
                if ($nums[$l] == $mx) {
                    $cur--;
                }
                ++$l;
            }
        }
        return $ans;
    }
}