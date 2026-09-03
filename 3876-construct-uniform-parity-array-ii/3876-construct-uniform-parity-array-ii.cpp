class Solution {
public:
    bool iseven(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                return false;
            }
        }
        return true;
    }
    bool isodd(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                return false;
            }
        }
        return true;
    }
    bool uniformArray(vector<int>& nums) {
        if(iseven(nums)) return true;
        if(isodd(nums)) return true;
        int minodd = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                minodd = min(minodd,nums[i]);
            }
        }

        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0 && nums[i]<minodd){
                return false;
            }
        }

        
        return true;
    }
};