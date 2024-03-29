class Solution {

    /**
     * @param String $s
     * @return Integer
     */
    function romanToInt($s)
{
    $track = array(
        "I" => 1,
        "V" => 5,
        "X" => 10,
        "L" => 50,
        "C" => 100,
        "D" => 500,
        "M" => 1000
    );
    $keys = array_keys($track);
    $n = strlen($s);
    $ans = 0;
    for ($i = 0; $i < $n; ++$i) {
        if ($i + 1 < $n and $s[$i] == 'I' and ($s[$i + 1] == "V" or $s[$i + 1] == "X")) {
            $ans += $track[$s[$i + 1]] - $track['I'];
            ++$i;
        } else if ($i + 1 < $n and $s[$i] == 'X' and ($s[$i + 1] == "L" or $s[$i + 1] == "C")) {
            $ans += $track[$s[$i + 1]] - $track['X'];
            ++$i;
        } else if ($i + 1 < $n and $s[$i] == 'C' and ($s[$i + 1] == "D" or $s[$i + 1] == "M")) {
            $ans += $track[$s[$i + 1]] - $track['C'];
            ++$i;
        } else {
            $ans += $track[$s[$i]];
        }
    }
    return $ans;
}
}