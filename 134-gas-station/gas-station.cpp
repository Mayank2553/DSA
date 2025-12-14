class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tg = 0, tc = 0;
        for(int i=0; i<gas.size(); i++){
            tg += gas[i];
            tc += cost[i];
        }
        if(tg < tc) return -1;
        int start = 0, tank = 0;
        for(int i=0; i<gas.size(); i++){
            tank += gas[i] - cost[i];
            if(tank < 0){
                tank = 0;
                start = i+1;
            }
        }
        return start;
    }
};