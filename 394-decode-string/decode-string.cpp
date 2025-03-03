class Solution {
public:
    string decodeString(string s) {
        int n = s.size();

        string ans = "";

        stack<char> st;
        for(int i=0; i<n; ++i){
            if(s[i] == ']'){
                string tmp = "";
                while(st.top() != '['){
                    tmp += st.top(); st.pop();
                }
                st.pop();
                string digs = "";
                while(st.empty()==0 and st.top()>='0' and st.top()<='9'){
                    digs += st.top(); st.pop();
                }
                reverse(digs.begin(), digs.end());
                int num = stoi(digs);
                reverse(tmp.begin(), tmp.end());
                string cur = "";
                while(num--) cur += tmp;
                for(char e:cur) st.push(e);
            }
            else st.push(s[i]);
        }
        while(st.empty() == 0){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};