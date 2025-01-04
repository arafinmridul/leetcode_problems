class Solution {
    public String answerString(String word, int numFriends) {
        int n = word.length();
        if(numFriends == 1)
            return word;
        int maxLen = n - numFriends + 1;
        String ans = word.substring(0, maxLen);

        for(int i=0; i<n; ++i){
            if(i + maxLen <= n){
                if(ans.compareTo(word.substring(i, i + maxLen)) < 0)
                    ans = word.substring(i, i + maxLen);
            }
            else{
                if(ans.compareTo(word.substring(i)) < 0)
                    ans = word.substring(i);
            }
        }

        return ans;
    }
}