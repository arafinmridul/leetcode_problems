class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<vector<int>> ans(2);
        map<int,int> a;
        map<int,int> b;
        for(int i=0; i<n; ++i){
            a[nums1[i]] = 1;
        }
        for(int i=0; i<m; ++i){
            b[nums2[i]] = 1;
            if(a[nums2[i]] != 1){
                ans[1].push_back(nums2[i]);
                a[nums2[i]] = 1;
            }
        }
        for(int i=0; i<n; ++i){
            if(b[nums1[i]] != 1){
                ans[0].push_back(nums1[i]);
                b[nums1[i]] = 1;
            }
        }
        return ans;
    }
};