class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map <int,int> map;
        vector <int> ans;

        for(int i=0;i<n;i++){
            int first = nums[i];
            int second = target - first;
            if(map.find(second) != map.end()){
                ans.push_back(i);
                ans.push_back(map[second]);
                break;
            }

            map[first] = i;
        }
        return ans;
    }
};