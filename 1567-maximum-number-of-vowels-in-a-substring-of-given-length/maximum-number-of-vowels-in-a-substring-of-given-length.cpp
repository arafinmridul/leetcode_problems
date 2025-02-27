class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        string v = "aeiou";
        int ans = 0;
        int cur = 0;
        for(int i=0; i<n; ++i){
            if(i < k){
                for(char e: v){
                    if(e == s[i]){
                        ++cur;
                        break;
                    }
                }
            }
            else{
                for(char e: v){
                    if(e == s[i]){
                        ++cur;
                        break;
                    }
                }
                for(char e: v){
                    if(e == s[i-k]){
                        --cur;
                        break;
                    }
                }
            }
            ans = max(ans, cur);
        }
        return ans;
    }
};