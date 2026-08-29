class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans;
        if(k==0){
            for(int i=0;i<code.size();i++){
                ans.push_back(0);
            }
        }
        if(k>0){
            for(int i=0;i<code.size();i++){
                int sum = 0,r = i+1,it = 0;
                while(it<k){
                    if(r>code.size()-1){
                        r = 0;
                    }
                    sum += code[r];
                    r++;it++;
                }
                ans.push_back(sum);
            }
            
        }

        if(k<0){
            k = -1*k;
            for(int i=0;i<code.size();i++){
                int sum = 0,r = i-1,it = 0;
                while(it<k){
                    if(r<0){
                        r = code.size()-1;
                    }
                    sum += code[r];
                    r--;it++;
                }
                ans.push_back(sum);
            }
        }
        return ans;
    }
};