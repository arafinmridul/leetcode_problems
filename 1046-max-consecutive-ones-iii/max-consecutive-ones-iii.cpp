class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int zerCnt = 0;
        int i=0;
        for(int j=0; j<n; ++j){
            if(!nums[j])
                ++zerCnt;
            while(zerCnt > k){
                if(nums[i] == 0)
                    zerCnt--;
                i++;
            }
            ans = max(ans , j-i+1);
        }
        return ans;
    }
};