class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "AaEeIiOoUu";
        string cur = "";
        int n = s.size();
        for(int i=0; i<n; ++i){
            for(int j=0; j<vowels.size(); ++j){
                if(s[i] == vowels[j])
                    cur += s[i];
            }
        }
        reverse(cur.begin(), cur.end());
        int idx = 0;
        int sz = cur.size();
        for(int i=0; i<n; ++i){
            for(int j=0; j<vowels.size(); ++j){
                if(s[i] == vowels[j]){
                    s[i] = cur[idx];
                    idx++;
                    break;
                }
            }
        }
        return s;
    }
};