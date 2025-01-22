import java.util.*;

class Solution {
    public boolean isValid(String s) {
        int n = s.length();

        Stack<Character> st = new Stack<>();

        for (int i = 0; i < n; ++i) {
            char c = s.charAt(i);
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty())
                    return false;
                char t = st.peek();

                if ((c == ')' && t != '(') || (c == '}' && t != '{') || (c == ']' && t != '['))
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
}