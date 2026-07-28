class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<string> sub;
        vector<vector<string>> ans;
        pal(s,sub,ans);
        return ans;
    }
    void pal(string s,vector<string>& sub,vector<vector<string>>& ans){
        int n = s.size();
        if(n==0){
            ans.push_back(sub);
            return;
        }

        for(int i=0;i<n;i++){
            string part = s.substr(0,i+1);
            if(ispalindrome(part)){
                sub.push_back(part);
                pal(s.substr(i+1),sub,ans);
                sub.pop_back();
            } 

        }
    }
    bool ispalindrome(string a){
        string d = a;
        reverse(a.begin(),a.end());
        return d==a;
    }
};