class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gassum = 0,costsum = 0;
        int st = 0;
        int cg = 0;
        for(int i=0;i<gas.size();i++){
            gassum = gassum + gas[i];
            costsum = costsum + cost[i];
            cg += (gas[i] - cost[i]);
            if(cg<0){
                st = i+1;
                cg = 0;
            }
        }
        if(gassum < costsum){
            return -1;
        }
        return st;

    }
};