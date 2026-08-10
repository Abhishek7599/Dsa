class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> ans;
        unordered_map <int,int> m;
        for(int x : nums){
            m[x]++;
        }
        for(int i=nums[0];i<nums[n-1];i++){
            if(m.find(i)==m.end()){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};