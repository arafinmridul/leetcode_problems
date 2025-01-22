class Solution {
    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);

        int closest = 0;
        int delta = 0;

        for (int i = 0; i < nums.length; i++) {
            int j = i + 1;
            int k = nums.length - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum == target) {
                    return sum;
                } else if (sum < target) {
                    if (closest == 0 || target - sum < delta) {
                        closest = sum;
                        delta = target - sum;
                    }
                    j++;
                } else {
                    if (closest == 0 || sum - target < delta) {
                        closest = sum;
                        delta = sum - target;
                    }
                    k--;
                }                
            }

        }

        return closest;
    }
}