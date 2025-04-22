class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        int cur = 0;
        // 1 1 1 1 0 0 0 1 1 1 0 1
        int l=0;
        for(int r = 0; r<n; ++r){
            if(nums[r] == 0){
                cur++;
            }
            while(cur > k){
                if(nums[l] == 0){
                    cur--;
                }
                l++;
            }
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};