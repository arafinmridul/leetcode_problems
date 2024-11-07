class Solution {
public:
    bool isBalanced(string num) {
        int s = num.size();

        int e=0, o=0;
        for(int i=0; i<s; i++){
            if(i&1) o += num[i] - '0';
            else e += num[i] - '0';
        }

        return (e==o);
    }
};