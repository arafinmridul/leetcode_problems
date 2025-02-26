class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n = min(str1.size(), str2.size());
        string ans = "";

        string cur = "";
        for(int i=0; i<n; ++i){
            cur += str1[i];
            if((str1.size()%cur.size()) or (str2.size()%cur.size()))
                continue;

            int a = str1.size() / cur.size();
            int b = str2.size() / cur.size();
            string tmp = "";
            for(int j=1; j<=a; ++j)
                tmp += cur;
            if(tmp != str1) continue;
            tmp = "";
            for(int j=1; j<=b; ++j)
                tmp += cur;
            if(tmp != str2) continue;

            ans = cur;
        }

        return ans;
    }
};