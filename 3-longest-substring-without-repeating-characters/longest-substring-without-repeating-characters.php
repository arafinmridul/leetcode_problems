class Solution {

    /**
     * @param String $s
     * @return Integer
     */
   function lengthOfLongestSubstring($s)
{
    $n = strlen($s);
    $l = $r = 0;
    $ans = 0;
    $map = array();
    while ($r < $n) {
        if ($s[$r] == ' ' and isset($map['space']) and $map['space'] >= $l) {
            $l = $map['space'] + 1;
        } else if (isset($map[$s[$r]]) and $map[$s[$r]] >= $l) {
            $l = $map[$s[$r]] + 1;
        }
        $s[$r] == ' ' ? $map['space'] = $r : $map[$s[$r]] = $r;
        $ans = max($ans, $r - $l + 1);
        $r++;
    }
    return $ans;
}
}