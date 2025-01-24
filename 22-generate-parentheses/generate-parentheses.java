class Solution {
    List<String> v = new ArrayList<>();

    void backtrack(int open, int close, String cur, int n){
        if(open + close == 2*n){
            v.add(cur);
            return;
        }
        if(close < open)
            backtrack(open, close+1, cur+')', n);
        if(open < n)
            backtrack(open+1, close, cur+'(', n);
        return;
    }

    public List<String> generateParenthesis(int n) {
        backtrack(0, 0, "", n);
        return v;
    }
}