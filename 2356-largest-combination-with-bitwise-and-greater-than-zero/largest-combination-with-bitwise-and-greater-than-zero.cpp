class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int ans = 0;

        for(int i=0; i<32; ++i){
            int ct = 0;
            for(int e: candidates){
                if((e >> i)&1) ct++;
            }
            ans = max(ans, ct);
        }

        return ans;
    }
};