class Solution {
public:
    set <vector<int>> s;
    void per(vector<int>& nums,vector<vector<int>>& ans,int idx){
        if(idx==nums.size()){
            if(s.find(nums)==s.end()){
                ans.push_back(nums);
                s.insert(nums);
                return;
            }   
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[i],nums[idx]);
            per(nums,ans,idx+1);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        per(nums,ans,0);
        return ans;
    }
};