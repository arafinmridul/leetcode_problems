class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        for(int i=0; i<n; ++i){
            if(i)
                gain[i] += gain[i-1];
        }
        int mx = *max_element(gain.begin(), gain.end());
        return mx < 0 ? 0 : mx;
    }
};