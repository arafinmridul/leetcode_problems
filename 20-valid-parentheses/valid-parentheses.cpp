class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;

        for(int i=0; i<n; ++i){
            char c = s[i];
            if(c=='(' or c=='{' or c=='['){
                st.push(c);
            }
            else{
                if(st.empty())
                    return false;
                char t = st.top();
                if((c==')' and t!='(') or (c=='}' and t!='{') or (c==']' and t!='['))
                    return false;
                 st.pop();
            }
        }
        if(st.empty())
            return true;
        return false;
    }
};