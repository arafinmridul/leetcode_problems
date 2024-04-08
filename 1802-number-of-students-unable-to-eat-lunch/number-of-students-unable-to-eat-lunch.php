class Solution {

    /**
     * @param Integer[] $students
     * @param Integer[] $sandwiches
     * @return Integer
     */
    function countStudents($students, $sandwiches) {
    $count = array_count_values($students);
    foreach ($sandwiches as $sandwich) {
        if ($count[$sandwich] == 0) break;
        $count[$sandwich]--;
    }
    return $count[0] + $count[1];
}
}