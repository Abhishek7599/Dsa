class Solution {
public:
    bool isSafe(int n,int row,int col,vector<string> &board){
        //vertical
        for(int i=0;i<n;i++){
            if(board[row][i]=='Q'){
                return false;
            }

        }
        //horizontal
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q'){
                return false;
            }

        }
        //left diagnol
        for(int i=row,j=col;i>=0 && j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        // right diagnol
        for(int i=row,j=col;i>=0 && j<n;i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }
    void queens(int n,vector<string> &board,int row,vector<vector<string>> &ans){
        if(row==n){
            ans.push_back({board});
            return;
        }
        for(int j=0;j<n;j++){
            if(isSafe(n,row,j,board)){
                board[row][j] ='Q';
                queens(n,board,row+1,ans);
                board[row][j] ='.'; //backtracking;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));
        queens(n,board,0,ans);
        return ans;

    }
};