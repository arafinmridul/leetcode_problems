class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int n = s.size();

        int i=0;
        while(i<n){
            while(s[i] == ' '){
                i++;
            }

            string tmp = "";
            while(s[i]!=' ' and i<n){
                tmp += s[i];
                i++;
            }
            if(tmp.size())
                words.push_back(tmp);
        }
        string ans = "";
        for(int i=words.size()-1; i>=0; --i){
            ans += words[i];
            if(i) ans += " ";
        }
        return ans;
    }
};