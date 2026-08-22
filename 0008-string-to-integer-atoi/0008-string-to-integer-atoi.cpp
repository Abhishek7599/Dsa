class Solution {
public:
    bool isdig(char c){
        return c >= '0' && c <= '9';
    }
    int myAtoi(string s) {
       
        int n = s.size();
        int i = 0;
        // skip spaces
        while(i<n && s[i] == ' '){
            i++;
        }
        int sign = 1;
        if(i<n && s[i] == '-'){
            sign = -1;
            i++;
        }else if(i<n && s[i] == '+'){
            i++;
        }

        long long num =0;
        while(i<n && isdig(s[i])){
            num = num * 10 + (s[i] - '0');
            if(num*sign > INT_MAX){
                return INT_MAX;
            }
            if(num*sign < INT_MIN){
                return INT_MIN;
            }
            i++;

        }
        return sign*num;

    }
};