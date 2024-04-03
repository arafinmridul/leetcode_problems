class Solution {
public:
    vector<string> v;
    void backtrack(int open, int close, string cur, int n){
        if(open + close == 2*n){
            v.push_back(cur);
            return;
        }
        if(close < open)
            backtrack(open, close+1, cur+')', n);
        if(open < n)
            backtrack(open+1, close, cur+'(', n);
        return;
    }
    vector<string> generateParenthesis(int n) {
        backtrack(0, 0, "", n);
        return v;
    }
};