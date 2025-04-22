class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> a(26,0), b(26,0);

        for(auto c:word1)
            a[c-'a']++;
        for(auto c:word2)
            b[c-'a']++;

        for(int i=0; i<26; ++i){
            if((a[i] and !b[i]) or (!a[i] and b[i]))
                return false;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        return a == b;
    }
};