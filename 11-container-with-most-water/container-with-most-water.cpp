class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int l = 0, r = n-1;
        int ans = 0;
        while(l < r){
            ans = max(ans, min(height[l],height[r])*(r-l));
            height[r] < height[l] ? r-- : l++;
        }

        return ans;
    }
};