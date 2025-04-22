class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int a = str1.size();
        int b = str2.size();

        string cur = "";
        string ans = "";

        // ABC
        // ABCABC
        for(int i=1; i<=a; ++i){
            cur += str1[i-1];

            if(a%i or b%i){
                continue;
            }
            string comp = "";
            for(int j=0; j< a/i; ++j)
                comp += cur;
            if(comp != str1) continue;
            comp = "";
            for(int j=0; j < b/i; ++j){
                comp += cur;
            }

            if(comp != str2) continue;
                ans = cur;
        }

        return ans;
    }
};