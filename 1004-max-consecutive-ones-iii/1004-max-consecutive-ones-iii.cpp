class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0, maxcount = 0, tr = 0;
        int l = 0, r = 0;
        while(r<n){
            // right->expND
            //LEFT -> shrink
            if(nums[r]==0 ){
                tr = tr+1;
            }
            if(tr>k){
                if(nums[l]==0){
                    tr = tr - 1;
                }
                l++;
            }
            if(tr<=k){
                count = r-l+1;
                maxcount = max(count,maxcount);
            }
            r++;
        }
        return maxcount;
    }
};