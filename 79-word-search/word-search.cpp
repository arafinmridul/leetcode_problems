class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();

        function<bool(int,int,int)> backtrack = [&](int i, int j, int k){
            if(k == word.size()) return true;
            if(i<0 or i>=n or j<0 or j>=m or board[i][j]!=word[k])
                return false;

            char tmp = board[i][j];
            board[i][j] = '\0';

            if(backtrack(i+1,j,k+1) or backtrack(i,j+1,k+1) 
            or backtrack(i-1,j,k+1) or backtrack(i,j-1,k+1)){
                return true;
            }

            board[i][j] = tmp;
            return false;
        };

        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                if(backtrack(i,j,0))
                    return true;
            }
        }
        return false;
    }
};