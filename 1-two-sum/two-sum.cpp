class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, vector<int>> mp;
        for(int i=0; i<n; ++i){
            mp[nums[i]].push_back(i);
        }
        vector<int> ans;
        for(int i=0; i<n; ++i){
            int temp = target - nums[i];
            int sz = mp[temp].size();
            if(sz == 0) continue;
            // 4 tar8
            if(temp == nums[i] and sz>1){
                ans.push_back(i);
                ans.push_back(mp[temp][1]);
                return ans;
            }
            else if(temp != nums[i] and sz > 0){
                ans.push_back(i);
                ans.push_back(mp[temp][0]);
                return ans;
            }
        }
        return ans;
    }
};