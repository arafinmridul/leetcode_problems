class Solution {

    /**
     * @param Integer $num
     * @return String
     */
    function intToRoman($num) {
        $track = array(
            "I" => 1, "IV" => 4, "V" => 5,
            "IX" => 9, "X" => 10, "XL" => 40,
            "L" => 50, "XC" => 90, "C" => 100,
            "CD" => 400, "D" => 500, "CM" => 900,
            "M" => 1000
        );
        $track = array_reverse($track);
        $ans = "";
        foreach($track as $i => $j){
            while($num >= $j){
                $num -= $j;
                $ans .= $i;
            }
        }
        return $ans;
    }
}