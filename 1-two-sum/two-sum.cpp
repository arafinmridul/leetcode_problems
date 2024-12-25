class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        map<int,int> mp;

        for(int i=0; i<n; ++i){
            mp[nums[i]] = i;
        }

        vector<int> ans(2);

        for(int i=0; i<n; ++i){
            int otherNumber = target - nums[i];

            if(mp.count(otherNumber) && mp[otherNumber] != i){
                ans[0] = i;
                ans[1] = mp[otherNumber];
            }
        }

        return ans;

    }
};