class Solution {

    /**
     * @param Integer $x
     * @return Boolean
     */
    function isPalindrome($x)
{
    $x = intval($x);
    if ($x < 0)
        return false;
    $check = array();
    while ($x > 0) {
        array_push($check, $x % 10);
        $x = floor($x / 10);
    }
    $n = sizeof($check);
    for ($i = 0; $i < $n / 2; ++$i) {
        if ($check[$i] != $check[$n - 1 - $i])
            return false;
    }
    return true;
}
}