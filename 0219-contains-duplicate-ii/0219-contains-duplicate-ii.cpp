class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int j = 0;j<nums.size();j++){
            if(m.find(nums[j])!=m.end()){
                if(j - m[nums[j]] <= k){
                     return true;
                }
            }
            m[nums[j]] = j;
        }
        return false;
    }
};