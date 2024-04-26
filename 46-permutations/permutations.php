class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer[][]
     */
    public $ans = array();
    function swap(&$a, $i, $j){  
        $temp = $a[$i] ;  
        $a[$i] = $a[$j];  
        $a[$j] = $temp;  
        return $a;
    }
    function permutee($nums, $l, $r){  
        if ($l == $r) array_push($this->ans, $nums);  
        else{  
            for ($i = $l; $i <= $r; $i++){  
                $nums = $this->swap($nums, $l, $i);  
                $this->permutee($nums, $l + 1, $r);  
                $nums = $this->swap($nums, $l, $i);  
            }  
        }  
    }
    function permute($nums) {
        $n = sizeof($nums);
        $this->permutee($nums, 0, $n - 1);
        return $this->ans;
    }
}