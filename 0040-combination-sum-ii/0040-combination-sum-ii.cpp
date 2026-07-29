class Solution {
public:
    vector<int> comb;
    vector<vector<int>> ans;
    void funct(vector<int>& arr, int idx, int tar){
        int n = arr.size();
        if(tar==0){
            ans.push_back(comb);
            return;
        }
        for(int i = idx;i<n;i++){
            if(i>idx && arr[i]==arr[i-1]) continue;
            if(arr[i]>tar) break;

            comb.push_back(arr[i]);
            funct(arr,i+1,tar-arr[i]);
            comb.pop_back();


        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        
        funct(candidates,0,target);
        return ans;
    }
};