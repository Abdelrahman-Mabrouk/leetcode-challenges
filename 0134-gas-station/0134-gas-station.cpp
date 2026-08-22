class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int res = 0;
        long long sum =0 , sum2=0;
        bool flag =false;
        vector<int> deff ;
        for (int i = 0; i < gas.size(); ++i) {
            sum+=gas[i];
            sum2+=cost[i];
            deff.push_back(gas[i]-cost[i]);
        }
        if(sum-sum2<0) return -1;
        sum =deff[0];
        int startIndex =0;
        int i =0;
        if (sum > 0 ) i =1;
        for ( ; i < gas.size(); ++i) {
            if(sum<0){
                sum=0;
                flag =true;
                i-=1;
                continue;}

                if(flag){
                    res = i;
                    flag =false;
                }
               sum=deff[i]+sum;

        }
        if(flag)return gas.size()-1;

        return res;
    }
};
