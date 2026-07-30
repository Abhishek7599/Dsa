class Solution {
public:
    set <vector<int>> s;
    void poss(vector<vector<int>>& ans,vector<int>& comb,int n,int k,int start){
            if(comb.size()==k){
                if(s.find(comb)==s.end()){
                    ans.push_back(comb);
                    s.insert(comb);
                    return;

                }
            }
        for(int i=start;i <= n;i++){
            comb.push_back(i);
            poss(ans,comb,n,k,i+1);
            comb.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> comb;
        vector<vector<int>> ans;
        poss(ans,comb,n,k,1);
        return ans;
    }
};