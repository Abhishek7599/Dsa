class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int count = 0,maxc = 0;
        int l = 0,r = 0;
        unordered_map<char,int> m;
        while(r<n){
            if(m.find(s[r]) != m.end()){
                l = max(l,m[s[r]] + 1);
            }
            count = r - l + 1;
            maxc = max(count,maxc);
            m[s[r]] = r;
            r++;
        }
        return maxc;
    }
};