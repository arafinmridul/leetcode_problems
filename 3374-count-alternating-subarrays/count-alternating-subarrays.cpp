class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long n = nums.size();
        long long ans = (n*(n+1))/2;
        long long to_sub = 0;
        long long prev = 0;
        for(long long i=1; i<n; ++i){
            if(nums[i] == nums[i-1]){
                to_sub += (i-prev)*(n-i);
                prev = i;
            }
        }
        ans -= to_sub;
        return ans;
    }
};