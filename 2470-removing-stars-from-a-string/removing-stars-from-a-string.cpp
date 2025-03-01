class Solution {
public:
    string removeStars(string s) {
        int n = s.size();
        string ans = "";
        int cur = 0;
        for(int i=n-1; i>=0; --i){
            if(s[i] == '*'){
                cur++;
            }
            else if(s[i] != '*' and cur){
                cur--;
            }
            else{
                ans += s[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};