class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        for(int i=0; i<n; ++i){
            int j = i+1;
            if(nums[i] == 0){
                while(j < n and !nums[j])
                    j++;
                if(j == n) break;
                swap(nums[i], nums[j]);
            }
        }
    }
};