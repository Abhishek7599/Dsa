class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int st=0,end = 1;
        while(st<n&&end<n){
            if(nums[st]==0&&nums[end]!=0){
                swap(nums[st],nums[end]);
                st++;end++;
            }else if(nums[st]==0&&nums[end]==0){
                end++;
            }else{
                st++;end++;
            }
        }
    }
};