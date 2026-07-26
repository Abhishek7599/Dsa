class Solution {
public:
    int maxProduct(int n) {
        int dig,product = 1;
        vector <int> num;
        while(n>0){
            dig = n%10;
            num.push_back(dig);
            n = n/10;
        }
        sort(num.begin(),num.end());
        int s = num.size();
        int option1 = num[s-1]*num[s-2];
        return option1;
        
    }
};