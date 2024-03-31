class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n=nums.size();
        long long ans=0;
        int mx=-1, mn=-1;
        for(int r=0, l=0; r<n; r++){
            int x=nums[r];
            if (x<minK ||x>maxK){
                l=r+1;
                continue;
            }
            if (x==maxK) mx=r;
            if (x==minK) mn=r;
            ans+=max((min(mx, mn)-l+1),0);
        }
        return ans;
    }
};