class Solution {
public:
    vector<string> result;
    void backtrack(int n,int open,int close,string temp){
        if(temp.size() == 2*n){
            result.push_back(temp);
        }

        if(open < n){
            backtrack(n,open+1,close,temp + "(");
        }
        if(close < open){
            backtrack(n,open,close+1,temp + ")");
        }
    }
    vector<string> generateParenthesis(int n) {
        backtrack(n,0,0,"");
        return result;
    }
};