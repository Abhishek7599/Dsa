class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 0, maxcount = 0,i=0;
        for(int j = i+1;j<nums.size();j++){
            while(nums[j] - nums[i] > 1){
                i++;
            }
            if( nums[j] - nums[i] == 1 ){
                count = j - i + 1;
                maxcount = max(count,maxcount);

            }
            
        }
        return maxcount;
    }
};