class Solution {
public:
    set<vector<int>> s;
    void check(vector<int>& arr,vector<vector<int>>& ans, vector<int>& comb,int i,int tar){
        //basecases
        if(i==arr.size() || tar<0) return;
        if(tar == 0){
            if(s.find(comb)==s.end()){
                ans.push_back(comb);
                s.insert(comb);
            }
            return;
        }
        comb.push_back(arr[i]);
        // single choices
        check(arr,ans,comb,i+1,tar-arr[i]);
        // multiple choices
        check(arr,ans,comb,i,tar-arr[i]);
        //backtack
        comb.pop_back();
        //exclude or no choices
        check(arr,ans,comb,i+1,tar);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> comb;
        check(candidates,ans,comb,0,target);
        return ans;
    }
};