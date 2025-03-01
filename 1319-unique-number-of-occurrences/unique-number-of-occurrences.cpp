class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        map<int,int> mp;
        for(int i=0; i<n; ++i){
            mp[arr[i]]++;
        }
        vector<int> check;
        for(auto it=mp.begin(); it!=mp.end(); ++it){
            check.push_back(it->second);
        }
        sort(check.begin(), check.end());
        int prev = 0;
        for(int i=0; i<check.size(); ++i){
            if(check[i] == prev)
                return false;
            prev = check[i];
        }
        return true;
    }
};