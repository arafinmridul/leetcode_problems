class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i=0;
        int streak = 0;
        char cur;
        string s = "";
        for(int i=0; i<n; ++i){
            if(i == 0){
                streak = 1;
                cur = chars[i];
            }
            if(i and chars[i] == chars[i-1]){
                streak++;
            }
            else if(i and chars[i] != chars[i-1]){
                s += cur;
                if(streak > 1)s += to_string(streak);
                streak = 1;
            }
            cur = chars[i];
            if(i==n-1){
                s += cur;
                if(streak > 1)s += to_string(streak);
            }
        }
        int sz = s.size();
        for(int i=0; i<sz; ++i){
            chars[i] = s[i];
        }
        return sz;
    }
};