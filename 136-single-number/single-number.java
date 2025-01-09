class Solution {
    public int singleNumber(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        for(int i=0; i<n; i+=2){
            if(i == n-1)
                return nums[i];
            if(nums[i] != nums[i+1])
                return nums[i];
        }
        return 0;
    }
}
