class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int maxsum = 0;
        int lsum = 0,rsum = 0;
        for(int i = 0;i<k;i++){
            lsum += nums[i];
            maxsum = max(maxsum,lsum);
        }
        int r = n-1;
        for(int i = k-1;i>=0;i--){
            lsum = lsum - nums[i];
            rsum = rsum + nums[r];
            r = r-1;
            maxsum = max(maxsum,lsum + rsum);
        }
        return maxsum;
    }
};