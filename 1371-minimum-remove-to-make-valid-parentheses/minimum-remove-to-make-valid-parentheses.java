class Solution {
    public String minRemoveToMakeValid(String s) {
        int open = 0;
        StringBuilder ans = new StringBuilder();
        int n = s.length();
        for(int i=0; i<n; ++i){
            char c = s.charAt(i);
            if(open==0 && c==')')
                continue;
            if(c == '(')
                open++;
            if(c==')')
                open--;
            ans.append(c);
        }
        String ans1 = ans.toString();
        n = ans1.length();

        StringBuilder ans2 = new StringBuilder();
        int close = 0;
        for(int i=n-1; i>=0; --i){
            char c = ans.charAt(i);
            if(close==0 && c=='(')
                continue;
            if(c == ')')
                close++;
            if(c=='(')
                close--;
            ans2.append(c);
        }

        return ans2.reverse().toString();
    }
}