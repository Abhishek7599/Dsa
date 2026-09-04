class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> vmax(n,0);
        vector<int> vmin(n,0);
        vmax[0] = nums[0];
        vmin[n-1] = nums[n-1];
        for(int i=1;i<n;i++){
            vmax[i] = max(nums[i],vmax[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            vmin[i] = min(nums[i],vmin[i+1]);
        }
        for(int i=0;i<n;i++){
            if(vmax[i] - vmin[i] <= k){
                return i;
            }
        }
        return -1;
    }
};