class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        int cur = 0;
        for(int i=0; i<m; ++i){
            if(t[i] == s[cur]){
                cur++;
            }
            if(cur == n) break;
        }
        return cur == n;
    }
};