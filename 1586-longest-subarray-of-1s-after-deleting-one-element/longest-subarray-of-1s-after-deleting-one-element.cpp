class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int zer = 0;
        int ans = 0;
        int i=0;
        for(int j=0; j<n; ++j){
            if(nums[j] == 0){
                zer++;
            }
            while(zer > 1){
                if(nums[i] == 0)
                    zer--;
                i++;
            }
            ans = max(ans, j-i);
        }
        return ans;
    }
};