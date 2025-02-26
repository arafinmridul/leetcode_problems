class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int zero = 0;
        int multi = 1;
        for(int i=0; i<n; ++i){
            if(nums[i] == 0)
                ++zero;
            else multi *= nums[i];
        }
        if(zero > 1) return ans;

        for(int i=0; i<n; ++i){
            if(zero == 1){
                if(nums[i]) ans[i] = 0;
                else ans[i] = multi;
            }
            else ans[i] = multi / nums[i];
        }

        return ans;
    }
};