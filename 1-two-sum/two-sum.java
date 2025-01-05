class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;

        HashMap<Integer,Integer> mp = new HashMap<>();

        for(int i=0; i<n; ++i){
            mp.put(nums[i], i);
        }

        int[] ans = new int[2];

        for(int i=0; i<n; ++i){
            int other = target - nums[i];

            if(mp.containsKey(other) && mp.get(other) != i){
                ans[0] = i;
                ans[1] = mp.get(other);
                break;
            }
        }

        return ans;
    }
}