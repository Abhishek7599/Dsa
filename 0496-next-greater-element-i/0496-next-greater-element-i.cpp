class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        vector<int> ans(nums1.size(),0);
        unordered_map<int,int> m;
        for(int i = 0;i<nums1.size();i++){
            m[nums1[i]] = i;
        }
        for(int i=nums2.size()-1;i>=0;i--){
            if(m.find(nums2[i]) != m.end()){
                int idx = m[nums2[i]];
                while(s.size()>0 && s.top()<=nums2[i]){
                    s.pop();
                }
                if(s.empty()){
                    ans[idx] = -1;
                }else{
                    ans[idx] = s.top();
                }


            }
            s.push(nums2[i]);
        }
        return ans;
        
    }
};