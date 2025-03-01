class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;

        for(int i=0; i<n; ++i){
            while(!st.empty() and abs(st.top())<abs(arr[i]) and st.top()>0 and arr[i]<0)
                st.pop();
            if(!st.empty() and abs(st.top())>abs(arr[i]) and st.top()>0 and arr[i]<0)
                continue;
            if(!st.empty() and abs(st.top())==abs(arr[i]) and st.top()>0 and arr[i]<0){
                st.pop(); continue;
            }
            st.push(arr[i]);
        }
        vector<int> ans;
        while(st.empty()==0){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};