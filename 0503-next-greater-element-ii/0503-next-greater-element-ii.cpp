class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        int n = nums.size();
        vector<int> ans(n,0);

        for(int i=2*n - 1;i>=0;i--){
            int idx = i%n;
            while(s.size()>0 && s.top()<=nums[idx]){
                s.pop();
            }
            if(s.empty()){
                ans[idx] = -1;
            }else{
                ans[idx] = s.top();
            }

            s.push(nums[idx]);
        }
        return ans;
    }
};