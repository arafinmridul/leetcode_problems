class Solution {
public:
    string removeStars(string s) {
        stack<char> st;

        for(int i=0; i<s.size(); ++i)
            s[i] == '*' ? st.pop() : st.push(s[i]);

        s = "";
        while(!st.empty()){
            s += st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
};