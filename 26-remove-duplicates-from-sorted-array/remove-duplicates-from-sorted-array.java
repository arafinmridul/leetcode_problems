class Solution {
    public int removeDuplicates(int[] nums) {
        HashMap<Integer, Boolean> map = new HashMap<>();
        int n = nums.length;
        int k = 0;
        for(int i=0; i<n; ++i){
            if(!map.containsKey(nums[i])){
                map.put(nums[i], true);
                ++k;
            }
            else nums[i] = 101;
        }
        Arrays.sort(nums);
        return k;
    }
}