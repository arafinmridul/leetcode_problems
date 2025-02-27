class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        vector<long> l2r(n,0);
        vector<long> r2l(n,0);
        long mx = -1e10, mn = 1e10;
        for(int i=0; i<n; ++i){
            if(nums[i] < mn){
                mn = nums[i];
            }
            l2r[i] = mn;
            if(nums[n-1-i] > mx){
                mx = nums[n-1-i];
            }
            r2l[n-1-i] = mx;
        }
        for(int i=0; i<n; ++i){
            if(nums[i] > l2r[i] and nums[i] < r2l[i])
                return true;
        }
        return false;
    }
};